/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trossel <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 11:34:38 by trossel           #+#    #+#             */
/*   Updated: 2021/07/29 11:49:37 by trossel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include "ft.h"
#include "def.h"
#include "read_file.h"
#include "draw.h"
#include "parser.h"

void	process_map(char *file_name)
{
	t_parser	p;

	if (!init_parser(&p))
		return ;
	if (!parse_map_from_file(file_name, &p))
	{
		ft_putstr("map error\n");
	}
	else
	{
		if (p.best.n >= 0)
			draw_square(&p, p.best);
		write(1, p.vals, (p.width + 1) * p.height);
	}
	free_parser(&p);
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
			process_map(argv[i]);
			if (argc > 2 && i < argc - 1)
				ft_putstr("\n");
			i++;
		}
	}
	return (0);
}
