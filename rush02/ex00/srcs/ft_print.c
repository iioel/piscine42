/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prints.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slott <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 19:50:53 by slott             #+#    #+#             */
/*   Updated: 2021/07/25 21:04:43 by ycornamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strtools.h"
#include "ft_list.h"
#include "ft_print.h"
#include <stdlib.h>
#include <stdio.h>

void	ft_print_hundreds(char *str, t_listnbr *dict, char **str_to_print)
{
	char	nbr_part[3];

	nbr_part[0] = str[1];
	nbr_part[1] = str[2];
	nbr_part[2] = '\0';
	if (*(ft_find_nbr(str, dict)) != '\0')
	{
		ft_append_to_str(ft_find_nbr(str, dict), str_to_print);
		ft_append_to_str(" ", str_to_print);
	}
	else if (str[0] != '0')
	{
		ft_append_to_str(ft_find_nbr(ft_split(str, 1), dict), str_to_print);
		ft_append_to_str(" ", str_to_print);
		ft_append_to_str(ft_find_nbr("100", dict), str_to_print);
		ft_append_to_str(" ", str_to_print);
	}
	ft_print_tens(nbr_part, dict, str_to_print);
}

void	ft_print_tens(char *str, t_listnbr *dict, char **str_to_print)
{
	char	nbr_part[3];

	nbr_part[0] = str[0];
	nbr_part[1] = '0';
	nbr_part[2] = '\0';
	if (*(ft_find_nbr(str, dict)) != '\0')
	{
		ft_append_to_str(ft_find_nbr(str, dict), str_to_print);
		ft_append_to_str(" ", str_to_print);
	}
	else if (str[0] != '0')
	{
		ft_append_to_str(ft_find_nbr(nbr_part, dict), str_to_print);
		ft_append_to_str(" ", str_to_print);
		ft_append_to_str(ft_find_nbr(ft_split(str + 1, 1), dict), str_to_print);
		ft_append_to_str(" ", str_to_print);
	}
	else if (str[0] == '0' && str[1] != '0')
	{
		ft_append_to_str(ft_find_nbr(ft_split(str + 1, 1), dict), str_to_print);
		ft_append_to_str(" ", str_to_print);
	}
}

void	ft_print(char *str, t_listnbr *dict, char **str2)
{
	int		c;

	c = 0;
	while (c < ft_strlen(str))
	{
		ft_modulo_print(&c, str2, str, dict);
		ft_append_to_str(" ", str2);
	}
	ft_putstr(*str2);
}

void	ft_modulo_print(int *c, char **str2, char *str, t_listnbr *dict)
{
	if (*(ft_find_nbr(str, dict)) != '\0')
	{
		ft_append_to_str(ft_find_nbr(str + *c, dict), str2);
		*c = ft_strlen(str);
	}
	else if (ft_strlen(str + *c) % 3 == 0)
	{
		ft_print_hundreds(ft_split((str + *c), 3), dict, str2);
		ft_append_to_str(ft_find_nbr(ft_get_zeros(str + *c, 3), dict), str2);
		*c += 3;
	}
	else if (ft_strlen(str) % 3 == 2)
	{
		ft_print_tens(ft_split((str + *c), 2), dict, str2);
		ft_append_to_str(ft_find_nbr(ft_get_zeros(str + *c, 2), dict), str2);
		*c += 2;
	}
	else if (ft_strlen(str) % 3 == 1)
	{
		ft_print_tens(ft_split((str + *c), 1), dict, str2);
		ft_append_to_str(ft_find_nbr(ft_get_zeros(str + *c, 1), dict), str2);
		(*c)++;
	}
}
