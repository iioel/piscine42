/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trossel <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 11:34:38 by trossel           #+#    #+#             */
/*   Updated: 2021/07/27 10:45:32 by trossel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include "def.h"
#include "read_file.h"
#include "draw.h"
#include "solve.h"
#include "ft_putmap.h"
#include "free_map.h"

void	process_map(char *file_name)
{
	t_map		map;
	t_square	sq;

	if (parse_map_from_file(file_name, &map))
	{
		ft_putstr("map error\n");
		return ;
	}
	sq = solve(&map);
	if (sq.n <= 0)
	{
		ft_putstr("map error\n");
		return ;
	}
	draw_square(&map, sq);
	ft_putmap(map);
	free_map_values(&map);
}

int	main(int argc, char *argv[])
{
	int	i;

	if (argc == 1)
	{
		process_map(0);
	}
	else
	{
		i = 1;
		while (i < argc)
		{
			process_map(argv[i++]);
			if (argc > 2)
				ft_putstr("\n");
		}
	}
	return (0);
}
