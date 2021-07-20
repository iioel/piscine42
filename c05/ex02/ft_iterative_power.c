/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycornamu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 02:17:41 by ycornamu          #+#    #+#             */
/*   Updated: 2021/07/20 02:17:43 by ycornamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	if (power < 0)
		return (0);
	res = 1;
	while (power--)
		res *= nb;
	return (res);
}

// #include <stdio.h>
// 
// int	main(void)
// {
// 	int	nb;
// 	int	power;
// 
// 	nb = 2;
// 	power = 8;
// 	printf("%d**%d = %d", nb, power, ft_iterative_power(nb, power));
// }
