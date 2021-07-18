#include <stdlib.h>
#include "tab_tools.h"
#include "laws.h"

int	**ft_create_tab(int size)
{
	int	**tab;
	int	i;
	int	x;

	i = 0;
	tab = (int **)malloc(size * sizeof(int *));
	while (i < size)
	{
		x = 0;
		tab[i] = (int *)malloc(size * sizeof(int));
		while (x <= size)
		{
			tab[i][x++] = 0;
		}
		i++;
	}
	return (tab);
}

int	**ft_find_init_numbers(int **tab, int size_tab)
{
	int	i;
	int	x;

	i = 0;
	while (i < 4)
	{
		x = 0;
		while (x < (size_tab - 1))
		{
			tab = check_law_4(tab, size_tab, x);
			tab = check_law_1(tab, size_tab, x);
			tab = check_law_1_and_2(tab, size_tab, x);
			if (size_tab - 2 == 4)
				tab = check_law_2_and_3(tab, size_tab, x);
			x++;
		}
		tab = ft_rot_tab_90(tab, size_tab);
		i++;
	}
	return (tab);
}

int	**ft_copy_tab(int **tab, int **out_tab, int size_tab)
{
	int	x;
	int	y;

	x = 0;
	while (x < size_tab)
	{
		y = 0;
		while (y < size_tab)
		{
			out_tab[x][y] = tab[x][y];
			y++;
		}
		x++;
	}
	return (out_tab);
}

int	**ft_rot_tab_90(int **tab, int size_tab)
{
	int	x;
	int	y;
	int	**out_tab;

	x = 0;
	y = 0;
	out_tab = ft_create_tab(size_tab);
	while (y < size_tab)
	{
		x = 0;
		while (x < size_tab)
		{
			out_tab[size_tab - 1 - y][x] = tab[x][y];
			x++;
		}
		y++;
	}
	tab = ft_copy_tab(out_tab, tab, size_tab);
	ft_free_tab(out_tab, size_tab);
	return (tab);
}

void	ft_free_tab(int **tab, int size_tab)
{
	int	i;

	i = 0;
	while (i < size_tab)
		free(tab[i++]);
	free(tab);
}
