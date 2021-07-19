/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycornamu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 00:51:52 by ycornamu          #+#    #+#             */
/*   Updated: 2021/07/19 20:27:32 by ycornamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_digitnbr(unsigned int nb);
void			ft_putchar(char c);
int				ft_pow(int base, int pow);

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
		digit = u_nb / ft_pow(10, --nb_digit);
		u_nb -= digit * ft_pow(10, nb_digit);
		ft_putchar(digit + '0');
	}
}

int	ft_pow(int base, int pow)
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

	if (nb)
		nb_digit = 0;
	else
		nb_digit = 1;
	while (nb)
	{
		nb /= 10;
		nb_digit++;
	}
	return (nb_digit);
}

// int	main(void)
// {
// 	ft_putnbr(100);
// }
