#include "tab_tools2.h"

int	ft_find_first_zero(int **tab, int size_tab, int *x, int *y)
{
	*x = 1;
	while (*x < (size_tab))
	{
		*y = 1;
		while (*y < (size_tab))
		{
			if (tab[*x][*y] == 0)
				return (1);
			(*y)++;
		}
		(*x)++;
	}
	return (0);
}
