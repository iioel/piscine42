/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trossel <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 14:36:23 by trossel           #+#    #+#             */
/*   Updated: 2021/07/29 14:01:24 by trossel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "ft_strtools.h"
#include "def.h"
#include "parser.h"

int	parse_first_line(char **str, t_parser *parser)
{
	int	n;

	n = 0;
	while ((*str)[n] && (*str)[n] != '\n')
		n++;
	parser->c_square = (*str)[--n];
	parser->c_obstacle = (*str)[--n];
	parser->c_free = (*str)[--n];
	(*str)[n] = 'x';
	parser->height = ft_atoi(*str);
	parser->first_line_length = n + 4;
	*str += n + 4;
	if ((parser->c_square == parser->c_obstacle)
		|| (parser->c_square == parser->c_free)
		|| (parser->c_obstacle == parser->c_free)
		|| parser->height < 1)
	{
		return (0);
	}
	return (1);
}

int	handle_new_line(t_parser *p, char **s)
{
	if (!p->width)
	{
		p->width = p->i;
		p->vals = malloc((p->width + 1) * p->height * sizeof(*(p->vals)));
	}
	if (!p->vals || p->i != p->width)
	{
		return (0);
	}
	p->i = 0;
	(p->current_line)++;
	(*s)++;
	return (1);
}

int	parse_table_char(t_parser *p, char **s)
{
	int	val;

	if (**s == '\n' && !handle_new_line(p, s))
		return (0);
	if (p->current_line >= p->height)
		return (2);
	if (!(**s))
		return (1);
	if ((**s != p->c_obstacle && **s != p->c_free && **s != p->c_square)
		|| (p->i == p->heat_size && !increase_heatmap_size(p)))
		return (0);
	val = p->heat[p->i];
	if (**s == p->c_obstacle)
		p->heat[p->i] = 0;
	else if (p->i == 0)
		p->heat[0] = 1;
	else
		p->heat[p->i] = min(p->prev_heat_i,
				p->heat[p->i - 1], p->heat[p->i]) + 1;
	p->prev_heat_i = val;
	if (p->heat[p->i] > p->best.n)
		update_best_square(p);
	(p->i)++;
	(*s)++;
	return (1);
}

int	parse_buffer(t_parser *p, char *buffer, int n_bytes)
{
	char	*s;
	char	*s2;
	int		val;

	s = buffer;
	if (!p->height && !parse_first_line(&s, p))
		return (0);
	s2 = s;
	while (s - buffer < n_bytes)
	{
		val = parse_table_char(p, &s);
		if (!val)
			return (0);
		else if (val == 2)
			break ;
	}
	if (!p->width)
		return (0);
	while (s2 < s)
	{
		p->vals[p->i_map] = *(s2++);
		p->i_map += 1;
	}
	return (1);
}
