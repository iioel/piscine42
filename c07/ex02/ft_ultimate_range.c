/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycornamu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 17:11:00 by ycornamu          #+#    #+#             */
/*   Updated: 2021/07/22 13:59:42 by ycornamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = 0;
	*range = malloc((max - min) * sizeof(int));
	if (*range == NULL)
		return (-1);
	while ((min + i) < max)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (max - min);
}

// #include <stdio.h>
// 
// int	main(void)
// {
// 	int i;
// 	int j;
// 	int	min;
// 	int	max;
// 	int *tab;
// 
// 	i = 0;
// 	min = -5;
// 	max = 15;
// 	j = ft_ultimate_range(&tab, min, max);
// 	while (i < j)
// 		printf("%d\n", tab[i++]);
// }
