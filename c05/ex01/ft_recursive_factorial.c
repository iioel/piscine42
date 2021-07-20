/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycornamu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 02:17:50 by ycornamu          #+#    #+#             */
/*   Updated: 2021/07/20 20:31:43 by ycornamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb > 1)
		nb *= ft_recursive_factorial(nb - 1);
	if (nb > 0)
		return (nb);
	else if (nb == 0)
		return (1);
	return (0);
}

// #include <stdio.h>
// 
// int	main(void)
// {
// 	int nb;
// 
// 	nb = 3;
// 	printf("%d! = %d\n", nb, ft_recursive_factorial(nb));
// }
