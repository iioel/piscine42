/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycornamu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 10:00:04 by ycornamu          #+#    #+#             */
/*   Updated: 2021/07/28 10:34:26 by ycornamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	i;
	int	sign;

	i = 0;
	sign = 0;
	while (i < length)
	{
		if (i != 0 && f(tab[i - 1], tab[i]) > 0)
		{
			if (sign >= 0)
				sign = 1;
			else
				return (0);
		}
		else if (i != 0 && f(tab[i - 1], tab[i]) < 0)
		{
			if (sign <= 0)
				sign = -1;
			else
				return (0);
		}
		i++;
	}
	return (1);
}

//#include <stdio.h>
//
//int ft_diff(int a, int  b)
//{
//	return (a - b);
//}
//
//int main(void)
//{
//	int tab[] = {7, 3, 2, 3, 1};
//
//	printf("%d\n", ft_is_sort(tab, 5, &ft_diff));
//}
