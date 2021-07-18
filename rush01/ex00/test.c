#include <stdio.h>
#include "engine.h"
#include "ft_print_tab.h"
#include "backtrack.h"

int main(void)
{
	//int t[36] = {0, 4, 3, 2, 1, 0, 4, 1, 2, 3, 4, 1, 3, 2, 3, 4, 1, 2, 2, 3, 4, 1, 2, 2, 1, 4, 1, 2, 3, 2, 0, 1, 2, 2, 2, 0};
	int t[36] = {0, 2, 3, 1, 3, 0, 2, 2, 1, 4, 2, 2, 1, 4, 3, 2, 1, 4, 2, 3, 4, 1, 3, 2, 4, 1, 2, 3, 4, 1, 0, 3, 2, 2, 1, 0};
	int **tab;
	int x;
	int y;
	int i;
	int r;
	int size = 6;

	x = 0;
	y = 0;
	i = 0;
	tab = ft_create_tab(size);
	while (x < size)
	{
		y = 0;
		while (y < size)
		{
			tab[y][x] = t[i];
			i++;
			y++;
		}
		x++;
	}
	ft_print_tab(tab, size);
	ft_putstr("- - - - - -\n");
	r = reject(tab, size);
	printf("rejected : %d\n", r);
}
