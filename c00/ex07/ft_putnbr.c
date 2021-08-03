/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycornamu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 18:47:39 by ycornamu          #+#    #+#             */
/*   Updated: 2021/07/08 21:18:25 by ycornamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putnbr(int n)
{
	unsigned int	u_nbr;

	if (n < 0)
	{
		ft_putchar('-');
		u_nbr = (unsigned int)(n * -1);
	}
	else
		u_nbr = n;
	if (u_nbr >= 10)
	{
		ft_putnbr(u_nbr / 10);
		ft_putnbr(u_nbr % 10);
	}
	else
	{
		ft_putchar(u_nbr + '0');
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
