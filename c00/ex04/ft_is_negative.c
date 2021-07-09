/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycornamu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 16:02:36 by ycornamu          #+#    #+#             */
/*   Updated: 2021/07/08 20:15:33 by ycornamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_is_negative.h"
#include <unistd.h>

void	ft_is_negative(int n)
{
	char	r;

	if (n < 0)
	{
		r = 'N';
	}
	else
	{
		r = 'P';
	}
	write(1, &r, 1);
}
