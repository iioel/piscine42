#ifndef DEF_H
# define DEF_H

typedef struct s_map
{
	char	**v;
	int		width;
	int		height;
	char	c_obstacle;
	char	c_square;
	char	c_free;
}	t_map;

typedef struct s_point
{
	int	x;
	int	y;
}	t_point;

typedef struct s_square
{
	t_point	p;
	int		n;
}	t_square;

#endif
