#include "ft_print_tab.h"
#include "backtrack.h"
#include "tab_tools.h"
#include "args.h"

// TO SPLIT
int	backtrack(int **tab, int size_tab)
{
	int	x;
	int	y;
	int	t_n;
	int	**n_tab;

	if (reject(tab, size_tab))
		return (1);
	if (accept(tab, size_tab))
		return (0);
	t_n = 1;
	while (t_n <= (size_tab - 2) && ft_find_first_zero(tab, size_tab, &x, &y))
	{
		n_tab = ft_create_tab(size_tab);
		n_tab = ft_copy_tab(tab, n_tab, size_tab);
		n_tab[x][y] = t_n;
		if (backtrack(n_tab, size_tab) == 0)
		{
			tab = ft_copy_tab(n_tab, tab, size_tab);
			ft_free_tab(n_tab, size_tab);
			return (0);
		}
		ft_free_tab(n_tab, size_tab);
		t_n++;
	}	
	return (1);
}

int	reject(int **tab, int size_tab)
{
	int	x;
	int	side;

	x = 1;
	side = 0;
	while (side < 4)
	{
		x = 1;
		while (x < (size_tab - 1))
		{
			if (! check_line(tab, size_tab, x))
				return (1);
			x++;
		}
		tab = ft_rot_tab_90(tab, size_tab);
		side++;
	}
	return (0);
}

int	accept(int **tab, int size_tab)
{
	int	x;
	int	side;
	int	a;
	int	b;

	if (! ft_find_first_zero(tab, size_tab, &a, &b))
	{
		side = 0;
		while (side < 4)
		{
			x = 1;
			while (x < (size_tab - 1))
			{
				if (! check_spectator(tab, size_tab, x))
					return (0);
				x++;
			}
			tab = ft_rot_tab_90(tab, size_tab);
			side++;
		}
	}
	else
		return (0);
	return (1);
}

int	check_line(int **tab, int size_tab, int x)
{
	int	i;
	int	y;

	i = 1;
	while (i < (size_tab - 2))
	{
		y = i + 1;
		while (y < (size_tab - 1))
		{
			if (tab[x][i] == tab[x][y] && tab[x][i] != 0 && tab[x][y] != 0)
				return (0);
			y++;
		}
		i++;
	}
	return (1);
}

int	check_spectator(int **tab, int size_tab, int x)
{
	int	y;
	int	max;
	int	spectator;
	int	view_by_spect;

	y = 1;
	max = tab[x][1];
	spectator = tab[x][0];
	view_by_spect = 0;
	while (y < (size_tab - 1))
	{
		if (y == 1 || tab[x][y] > max)
		{
			max = tab[x][y];
			view_by_spect++;
		}
		y++;
	}
	if (spectator == view_by_spect)
		return (1);
	return (0);
}
