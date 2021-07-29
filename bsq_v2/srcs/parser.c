/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trossel <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 19:44:13 by trossel           #+#    #+#             */
/*   Updated: 2021/07/28 19:44:17 by trossel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "parser.h"

#define HEAT_START_SIZE 10000

int	increase_heatmap_size(t_parser *p)
{
	int	*tmp;
	int	i;
	int	factor;

	factor = 2;
	i = 0;
	tmp = p->heat;
	p->heat_size *= factor;
	p->heat = malloc(p->heat_size * sizeof(int));
	if (!p->heat)
		return (0);
	while (i < (p->heat_size))
	{
		if (i < (p->heat_size / factor))
			p->heat[i] = tmp[i];
		else
			p->heat[i] = 0;
		i++;
	}
	free(tmp);
	return (1);
}

void	update_best_square(t_parser *p)
{
	p->best.n = p->heat[p->i];
	p->best.x = p->i;
	p->best.y = p->current_line;
}

int	init_parser(t_parser *p)
{
	p->heat = malloc(HEAT_START_SIZE * sizeof(int));
	if (!p->heat)
		return (0);
	p->heat_size = HEAT_START_SIZE;
	p->width = 0;
	p->height = 0;
	p->i = 0;
	while (p->i < HEAT_START_SIZE)
		p->heat[p->i++] = 0;
	p->i = 0;
	p->best.x = -1;
	p->best.y = -1;
	p->best.n = 0;
	p->current_line = 0;
	p->prev_heat_i = 0;
	p->i_map = 0;
	return (1);
}

void	free_parser(t_parser *p)
{
	if (p->heat)
		free(p->heat);
	if (p->vals)
		free(p->vals);
}
