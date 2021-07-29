/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trossel <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 14:36:23 by trossel           #+#    #+#             */
/*   Updated: 2021/07/26 21:00:04 by trossel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "def.h"

int	check_for_obstacle_on_line(t_map *map, t_point p, int n)
{
	int	i;

	i = n - 1;
	while (i >= 0)
	{
		if (map->v[p.y][p.x + i] == map->c_obstacle)
		{
			return (i);
		}
		i--;
	}
	return (-1);
}

int	check_for_square(t_map *map, t_point p, t_square *best)
{
	t_point	tmp_p;
	int		furthest_obstacle;
	int		tmp;

	furthest_obstacle = -1;
	tmp_p.y = p.y;
	tmp_p.x = p.x;
	while (tmp_p.y < p.y + best->n + 1)
	{
		tmp = check_for_obstacle_on_line(map, tmp_p, best->n + 1);
		if (tmp != -1 && furthest_obstacle < tmp)
			furthest_obstacle = tmp;
		tmp_p.y++;
	}
	if (furthest_obstacle == -1)
	{
		best->n++;
		best->p.x = p.x;
		best->p.y = p.y;
	}
	return (furthest_obstacle);
}

int	check_for_growing_squares(t_map *map, t_point p, t_square *best)
{
	int	obstacle;

	obstacle = -1;
	while (obstacle == -1
		&& p.x + best->n < map->width && p.y + best->n < map->height)
	{
		obstacle = check_for_square(map, p, best);
	}
	return (obstacle);
}

t_square	solve(t_map *map)
{
	t_point		p;
	t_square	best_square;
	int			furthest_obstacle;

	best_square.p.x = -1;
	best_square.p.y = -1;
	best_square.n = 0;
	p.y = 0;
	while (p.y < map->height - best_square.n)
	{
		p.x = 0;
		while (p.x < map->width - best_square.n)
		{
			furthest_obstacle = check_for_growing_squares(map, p, &best_square);
			if (furthest_obstacle > 0)
				p.x += furthest_obstacle;
			else
				p.x++;
			if (best_square.n > map->height - p.y
				|| best_square.n > map->width - p.x)
				break ;
		}
		p.y++;
	}
	return (best_square);
}
