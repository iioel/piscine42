/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trossel <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 17:50:48 by trossel           #+#    #+#             */
/*   Updated: 2021/07/26 18:01:04 by trossel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "def.h"

void	draw_square(t_map *map, t_square sq)
{
	int	i;
	int	j;

	i = 0;
	while (i < sq.n)
	{
		j = 0;
		while (j < sq.n)
		{
			map->v[sq.p.y + i][sq.p.x + j] = map->c_square;
			j++;
		}
		i++;
	}
}
