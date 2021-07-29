/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtools.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycornamu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 05:46:28 by ycornamu          #+#    #+#             */
/*   Updated: 2021/07/28 08:36:33 by ycornamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"
#include "ft_tail.h"

char	*ft_strjoin(char *str1, char *str2)
{
	int		total_size;
	char	*out;

	total_size = ft_strlen(str1) + ft_strlen(str2) + 1;
	out = malloc(total_size * sizeof(char));
	*out = 0;
	if (! out)
		return (NULL);
	ft_strcat(out, str1);
	ft_strcat(out, str2);
	return (out);
}

int	ft_atoi(char *str)
{
	int	factor;
	int	result;

	factor = 1;
	result = 0;
	if (*str == '+' || *str == '-')
		if (*str++ == '-')
			factor = -1;
	while (*str >= '0' && *str <= '9')
	{
		result *= 10;
		result += *str++ - '0';
	}
	return (result * factor);
}

char	*ft_strcat(char *dest, char *src)
{
	char	*cpydest;

	cpydest = dest;
	while (*cpydest)
		cpydest++;
	while (*src)
		*cpydest++ = *src++;
	*cpydest = 0;
	return (dest);
}

int	ft_strncmp(char *str1, char *str2, int n)
{
	int	i;

	i = 0;
	while (*str1 && *str2 && i < n)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		str1++;
		str2++;
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str++))
		i++;
	return (i);
}
