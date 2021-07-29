#include <stdlib.h>

#include "def.h"

void	free_map_values(t_map *map)
{
	int i;

	i = 0;
	while (i < map->height)
	{
		free(map->v[i++]);
	}
	free(map->v);
}
