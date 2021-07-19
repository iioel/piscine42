/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycornamu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 15:21:39 by ycornamu          #+#    #+#             */
/*   Updated: 2021/07/19 22:11:18 by ycornamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_nbr_base(unsigned int nbr, unsigned int size_base, char *base);
void	ft_putnbr_base(int nbr, char *base);
int		ft_is_in_base(char c, char *base, int skip);
int		ft_base_is_valid(char *base);

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	u_nbr;
	unsigned int	size_base;

	size_base = ft_base_is_valid(base);
	if (size_base)
	{
		if (nbr < 0)
		{
			write(1, "-", 1);
			u_nbr = (unsigned int)(nbr * -1);
		}
		else
			u_nbr = nbr;
		ft_print_nbr_base(u_nbr, size_base, base);
	}
}

int	ft_base_is_valid(char *base)
{
	unsigned int	size_base;

	size_base = 0;
	while (base[size_base])
	{
		if (base[size_base] == '-' || base[size_base] == '+'
			|| ft_is_in_base(base[size_base], base, size_base))
			return (0);
		size_base++;
	}
	if (size_base <= 1)
		return (0);
	return (size_base);
}

int	ft_is_in_base(char c, char *base, int skip)
{
	while (*(base + ++skip))
		if (c == *(base + skip))
			return (1);
	return (0);
}

void	ft_print_nbr_base(unsigned int nbr, unsigned int size_base, char *base)
{
	if (nbr >= size_base)
	{
		ft_print_nbr_base(nbr / size_base, size_base, base);
		ft_print_nbr_base(nbr % size_base, size_base, base);
	}
	else
		write(1, &base[nbr], 1);
}

// #include <stdio.h>
// 
// int	main(void)
// {
// 	ft_putnbr_base(-16, "0123456789abcdef");
// }
