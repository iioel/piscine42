/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycornamu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 02:17:11 by ycornamu          #+#    #+#             */
/*   Updated: 2021/07/20 02:17:13 by ycornamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	i_rev;

	i = 1;
	i_rev = 46340;
	while ((i * i) <= nb && (i_rev * i_rev) >= nb)
	{
		if ((i * i) == nb)
			return (i);
		else if ((i_rev * i_rev) == nb)
			return (i_rev);
		i++;
		i_rev--;
	}
	return (0);
}

// #include <stdio.h>
// 
// int	main(void)
// {
// 	int	n;
// 
// 	n = 535922500;
// 	printf("sqrt(%d) = %d\n", n, ft_sqrt(n));
// 	n = 2147483647;
// 	printf("sqrt(%d) = %d\n", n, ft_sqrt(n));
// }
