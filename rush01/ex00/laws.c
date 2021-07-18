#include "laws.h"

int	**check_law_4(int **tab, int size_tab, int x)
{
	int	y;

	y = 1;
	if (tab[x][0] == (size_tab - 2))
	{
		while (y < (size_tab - 1))
		{
			tab[x][y] = y;
			y++;
		}
	}
	return (tab);
}

int	**check_law_1(int **tab, int size_tab, int x)
{
	if (tab[x][0] == 1)
		tab[x][1] = size_tab - 2;
	return (tab);
}

int	**check_law_1_and_2(int **tab, int size_tab, int x)
{
	if (tab[x][0] == 1 && tab[x][size_tab - 1] == 2)
	{
		tab[x][1] = size_tab - 2;
		tab[x][size_tab - 2] = size_tab - 3;
	}
	return (tab);
}

int	**check_law_2_and_3(int **tab, int size_tab, int x)
{
	if (tab[x][0] == 2 && tab[x][size_tab - 1] == 3)
		tab[x][2] = size_tab - 2;
	return (tab);
}
