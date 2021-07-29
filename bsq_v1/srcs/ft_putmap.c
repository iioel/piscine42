#include "def.h"
#include "ft.h"
#include "draw.h"

void	ft_putmap(t_map map)
{
	int	x;
	int	y;

	y = 0;
	while (y < map.height)
	{
		x = 0;
		while (x < map.width)
		{
			ft_putchar(map.v[y][x++]);
		}
		y++;
		ft_putchar('\n');
	}
}

void	ft_putmap_square(t_map map, t_square sq)
{
	draw_square(&map, sq);
	ft_putmap(map);
}
