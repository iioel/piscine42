/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycornamu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 12:25:12 by ycornamu          #+#    #+#             */
/*   Updated: 2021/07/09 12:55:27 by ycornamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	i_a;
	int	i_b;

	i_a = *a;
	i_b = *b;
	*a = i_a / i_b;
	*b = i_a % i_b;
}
