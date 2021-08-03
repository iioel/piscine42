/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycornamu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 03:09:53 by ycornamu          #+#    #+#             */
/*   Updated: 2021/07/20 03:33:12 by ycornamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_sqrt(int nb);
int	ft_is_prime(int nb);

int	ft_find_next_prime(int nb)
{
	while (! ft_is_prime(nb))
		nb++;
	return (nb);
}

int	ft_is_prime(int nb)
{
	int	i;
	int	n;

	i = 2;
	n = ft_find_next_sqrt(nb);
	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	while (i <= n)
	{
		if (! (nb % i))
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_sqrt(int nb)
{
	long	i;
	long	i_rev;

	i = 1;
	i_rev = 46341;
	while (1)
	{
		if ((i * i) >= nb)
			return (i);
		else if ((i_rev * i_rev) < nb)
			return (i_rev + 1);
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
// 	int	count;
// 
// 	n = 536848900;
// 	count = 0;
// 	while (count < 10)
// 	{
// 		n = ft_find_next_prime(n);
// 		printf("prime = %d\n", n);
// 		n++;
// 		count++;
// 	}
// }
