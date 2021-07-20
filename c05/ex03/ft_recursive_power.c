/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycornamu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 02:17:34 by ycornamu          #+#    #+#             */
/*   Updated: 2021/07/20 02:17:35 by ycornamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	res;

	res = nb;
	if (! power)
		res = 1;
	else if (power < 0)
		res = 0;
	if (power > 1)
		res *= ft_recursive_power(nb, power - 1);
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
// 	printf("%d**%d = %d", nb, power, ft_recursive_power(nb, power));
// }
