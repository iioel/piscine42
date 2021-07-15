/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycornamu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 00:51:52 by ycornamu          #+#    #+#             */
/*   Updated: 2021/07/15 18:06:08 by ycornamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <unistd.h>

unsigned int	ft_digitnbr(unsigned int nb);
void			ft_putchar(char c);
int				ft_power(int base, int pow);

void	ft_putnbr(int nb)
{
	unsigned int	u_nb;
	unsigned int	nb_digit;
	char			digit;

	if (nb < 0)
	{
		u_nb = (unsigned int)(nb * -1);
		ft_putchar('-');
	}
	else
		u_nb = nb;
	nb_digit = ft_digitnbr(u_nb);
	while (nb_digit)
	{
		digit = u_nb / ft_power(10, --nb_digit);
		u_nb -= digit * ft_power(10, nb_digit);
		ft_putchar(digit + '0');
	}
}

int	ft_power(int base, int pow)
{
	int	res;

	res = 1;
	while (pow--)
		res *= base;
	return (res);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

unsigned int	ft_digitnbr(unsigned int nb)
{
	unsigned int	nb_digit;

	nb_digit = 0;
	while (nb)
	{
		nb /= 10;
		nb_digit++;
	}
	return (nb_digit);
}

// int	main(void)
// {
// 	ft_putnbr(-2147483648);
// }
