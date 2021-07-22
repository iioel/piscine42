/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycornamu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 16:02:56 by ycornamu          #+#    #+#             */
/*   Updated: 2021/07/22 22:49:20 by ycornamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int		ft_strlen(char *str);
void	*ft_strdup(char *src);

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*tab;
	t_stock_str	s_str;

	if (ac < 0)
		ac = 0;
	tab = malloc((ac + 1) * sizeof(t_stock_str));
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		s_str.size = ft_strlen(av[i]);
		s_str.str = av[i];
		s_str.copy = ft_strdup(av[i]);
		tab[i] = s_str;
		i++;
	}
	tab[i].str = 0;
	tab[i].size = 0;
	tab[i].copy = 0;
	return (tab);
}

void	*ft_strdup(char *src)
{
	int		i;
	int		size;
	char	*dest;

	i = 0;
	size = ft_strlen(src);
	dest = malloc((size + 1) * sizeof(char));
	if (dest == NULL)
		return (dest);
	while (*src)
	{
		dest[i++] = *(src++);
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str++))
	{
		i++;
	}
	return (i);
}

// #include <stdio.h>
// 
// int	main(int ac, char **av)
// {
// 	t_stock_str *t;
// 
// 	t = ft_strs_to_tab(ac - 1, av + 1);
// 	while (t->str != 0)
// 	{
// 		printf("%s\n", t->str);
// 		printf("%d\n", t->size);
// 		printf("%s\n", t->copy);
// 		t++;
// 	}
// }
