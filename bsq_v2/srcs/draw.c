/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trossel <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 17:50:48 by trossel           #+#    #+#             */
/*   Updated: 2021/07/28 18:32:55 by trossel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "def.h"

void	draw_square(t_parser *p, t_square sq)
{
	int	i;
	int	j;

	i = 0;
	while (i < sq.n)
	{
		j = 0;
		while (j < sq.n)
		{
			p->vals[(sq.y - i)*(p->width + 1) + sq.x - j] = p->c_square;
			j++;
		}
		i++;
	}
}
