/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycornamu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 20:17:45 by ycornamu          #+#    #+#             */
/*   Updated: 2021/07/29 21:53:14 by ycornamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include "ft_tail.h"

int	main(int ac, char **av)
{
	int		i;
	int		fd;
	int		offset;

	i = ft_get_c_opt(ac, av, &offset) + 1;
	if (i == 1)
		return (1);
	if (i == ac)
		ft_exec(0, i, av, offset);
	while (i < ac)
	{
		fd = ft_get_fd(av, &i);
		if (fd == -1)
			continue ;
		if (ac != (ft_get_c_opt(ac, av, &offset) + 2))
			ft_print_file_header(av[i]);
		ft_exec(fd, i, av, offset);
		if (ac != (ft_get_c_opt(ac, av, &offset) + 1) && i != ac - 1)
			ft_putstr("\n");
		close(fd);
		i++;
	}
	return (0);
}

int	ft_get_fd(char **av, int *i)
{
	int	fd;

	fd = open(av[*i], O_RDONLY);
	if (fd < 0)
	{
		ft_print_error(-1, av[0], av[(*i)++]);
		*i += 1;
		return (-1);
	}
	return (fd);
}

void	ft_exec(int fd, int i, char **av, int offset)
{
	char	*str;

	str = ft_file_to_str(fd);
	if (str)
		ft_display_str_from_end(str, offset);
	else
		ft_print_error(-1, av[0], av[i]);
}

int	ft_get_c_opt(int ac, char **av, int *offset)
{
	if (ac > 1 && ft_strncmp(av[1], "-c", 2) == 0)
	{
		if (ft_strlen(av[1]) == 2 && ft_is_numeric(av[2]))
		{
			*offset = ft_atoi(av[2]);
			return (2);
		}
		else if (ft_strlen(av[1]) == 2 && !ft_is_numeric(av[2]))
			return (ft_print_error(1, av[0], av[2]));
		else if (ft_strlen(av[1]) > 2 && ft_is_numeric(av[1] + 2))
		{
			*offset = ft_atoi(av[1] + 2);
			return (1);
		}
		else
			ft_print_error(2, av[0], "c");
	}
	*offset = 0;
	return (0);
}

int	ft_is_numeric(char *str)
{
	while (*str)
	{
		if (*str < '0' && *str > '9')
			return (0);
		str++;
	}
	return (1);
}
