/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtools.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trossel <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 19:43:07 by trossel           #+#    #+#             */
/*   Updated: 2021/07/28 19:43:11 by trossel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strtools.h"

int	ft_atoi(char *str)
{
	int	factor;
	int	result;

	factor = 1;
	result = 0;
	if (*str == '-')
	{
		factor = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
		result = result * 10 + *(str++) - '0';
	return (result * factor);
}

int	min(int a, int b, int c)
{
	if (a >= b && c >= b)
		return (b);
	else if (a <= b && a <= c)
		return (a);
	else
		return (c);
}
