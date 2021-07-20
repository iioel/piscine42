/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycornamu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 18:45:10 by ycornamu          #+#    #+#             */
/*   Updated: 2021/07/19 18:45:15 by ycornamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;

	if (nb <= 0)
		return (0);
	res = nb;
	while (--nb > 0)
		res *= nb;
	return (res);
}

// #include <stdio.h>
// 
// int	main(void)
// {
// 	int nb = 4;
// 	printf("%d! = %d", nb, ft_iterative_factorial(nb));
// }
