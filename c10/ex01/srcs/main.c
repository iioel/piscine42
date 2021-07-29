/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycornamu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 20:17:45 by ycornamu          #+#    #+#             */
/*   Updated: 2021/07/29 19:02:24 by ycornamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include "ft_cat.h"

int	main(int ac, char **av)
{
	int	i;
	int	fd;

	i = 1;
	if (ac == 1)
		i = 0;
	while (i < ac)
	{
		if (ac == 1 || ! ft_strcmp(av[i], "-"))
			fd = 0;
		else
		{
			fd = open(av[i], O_RDONLY);
			if (fd < 0)
			{
				ft_print_error(av[0], av[i]);
				return (1);
			}
		}
		if (ft_display_file(fd))
			ft_print_error(av[0], av[i]);
		if (fd > 0)
			close(fd);
		i++;
	}
}
