/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycornamu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 09:01:15 by ycornamu          #+#    #+#             */
/*   Updated: 2021/07/28 09:02:10 by ycornamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	i;
	int	*tab_out;

	i = 0;
	tab_out = malloc(length * sizeof(int));
	if (!tab_out)
		return (NULL);
	while (i < length)
	{
		tab_out[i] = f(tab[i]);
		i++;
	}
	return (tab_out);
}

// #include <stdio.h>
// 
// int	ft_add_2(int val)
// {
// 	return (val + 2);
// }
// 
// int main(void)
// {
// 	int tab[4];
// 	tab[0] = 0;
// 	tab[1] = 5;
// 	tab[2] = 10;
// 	tab[3] = 2;
// 	int *test;
// 	int i;
// 
// 	test = ft_map(tab, 4, &ft_add_2);
// 	i = 0;
// 	while (i < 4)
// 		printf("%d\n", test[i++]);
// }
