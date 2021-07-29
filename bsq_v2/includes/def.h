#ifndef DEF_H
# define DEF_H

typedef struct s_square
{
	int	x;
	int	y;
	int	n;
}	t_square;

typedef struct s_parser
{
	char		*vals;
	int			*heat;
	int			heat_size;
	int			i;
	int			width;
	int			height;
	int			current_line;
	int			first_line_length;
	int			i_map;
	int			prev_heat_i;
	char		c_obstacle;
	char		c_free;
	char		c_square;
	t_square	best;
}	t_parser;

#endif
