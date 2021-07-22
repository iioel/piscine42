/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycornamu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 19:34:11 by ycornamu          #+#    #+#             */
/*   Updated: 2021/07/21 19:34:13 by ycornamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	unsigned int	i;
	int				*tab;

	if (min >= max)
		return (NULL);
	i = 0;
	tab = malloc((max - min) * sizeof(int));
	while ((min + i) < (unsigned int)max)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}

// #include <stdio.h>
// 
// int	main(void)
// {
// 	int i;
// 	int	min;
// 	int	max;
// 	int *tab;
// 
// 	i = 0;
// 	min = 5;
// 	max = 15;
// 	tab = ft_range(min, max);
// 	while ((i + min) < max)
// 		printf("%d\n", tab[i++]);
// }
