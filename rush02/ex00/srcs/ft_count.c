/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchalard <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 19:52:11 by mchalard          #+#    #+#             */
/*   Updated: 2021/07/25 20:33:10 by ycornamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_strtools.h"
#include "ft_list.h"
#include "ft_count.h"

//char	*ft_find_nbr(char *str, t_listnbr *list);
//int		ft_strlen(char *str);

int	ft_count_tens(char *str, t_listnbr *dict)
{
	char	nbr[3];
	int		size;

	nbr[0] = str[0];
	nbr[1] = '0';
	nbr[2] = '\0';
	size = 0;
	if (*(ft_find_nbr(str, dict)) != '\0')
		size += ft_strlen(ft_find_nbr(str, dict)) + 1;
	else if (str[0] != '0')
	{
		size += ft_strlen(ft_find_nbr(nbr, dict)) + 1;
		size += ft_strlen(ft_find_nbr(ft_split(str + 1, 1), dict)) + 1;
	}
	else if (str[0] == '0')
		size += ft_strlen(ft_find_nbr(ft_split(str + 1, 1), dict)) + 1;
	return (size);
}

int	ft_count_hundreds(char *str, t_listnbr *dict)
{
	char	nbr[3];
	int		size;

	size = 0;
	nbr[0] = str[1];
	nbr[1] = str[2];
	nbr[2] = '\0';
	if (*(ft_find_nbr(str, dict)) != '\0')
		size += ft_strlen(ft_find_nbr(str, dict)) + 1;
	else if (str[0] != '0')
	{
		size += ft_strlen(ft_find_nbr(ft_split(str, 1), dict)) + 1;
		size += ft_strlen(ft_find_nbr("100", dict)) + 1;
	}
	return (size + ft_count_tens(nbr, dict));
}

int	ft_count(char *str, t_listnbr *dict)
{
	int	c;
	int	size;

	c = 0;
	size = 0;
	while (c < ft_strlen(str + c))
	{
		ft_modulo_count(&c, &size, str, dict);
	}
	return (size);
}

void	ft_modulo_count(int *c, int *size, char *str, t_listnbr *dict)
{
	if (ft_strlen(str) % 3 == 0)
	{
		*size += ft_count_hundreds(ft_split((str + *c), 3), dict);
		*size += ft_strlen(ft_get_zeros(str + *c, 3));
		*c += 3;
	}
	else if (ft_strlen(str) % 3 == 2)
	{
		*size += ft_count_tens(ft_split((str + *c), 2), dict);
		*size += ft_strlen(ft_get_zeros(str + *c, 2));
		*c += 2;
	}
	else if (ft_strlen(str) % 3 == 1)
	{
		*size += ft_count_tens(ft_split((str + *c), 1), dict);
		*size += ft_strlen(ft_get_zeros(str + *c, 1));
		(*c)++;
	}
}
