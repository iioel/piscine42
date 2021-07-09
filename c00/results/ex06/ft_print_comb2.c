/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycornamu <ycornamu@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 18:01:06 by ycornamu          #+#    #+#             */
/*   Updated: 2021/07/08 22:10:06 by ycornamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_comb2(void)
{
	int	i[2];

	i[0] = 0;
	i[1] = 1;
	while (i[0] < 99)
	{
		ft_putchar(i[0] / 10 + '0');
		ft_putchar(i[0] % 10 + '0');
		ft_putchar(' ');
		ft_putchar(i[1] / 10 + '0');
		ft_putchar(i[1] % 10 + '0');
		if (!(++i[1] <= 99))
			i[1] = ++i[0] + 1;
		if (i[0] < 99)
			write(1, ", ", 2);
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
