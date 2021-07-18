#include <unistd.h>
#include "ft_print_tab.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*(str++));
}

void	ft_print_tab(int **tab, int size)
{
	int	x;
	int	y;

	y = 1;
	while (y < size - 1)
	{
		x = 1;
		while (x < size - 1)
		{
			ft_putchar(tab[x][y] + '0');
			ft_putchar(' ');
			x++;
		}
		ft_putchar('\n');
		y++;
	}
}

void	ft_print_tab_spectators(int **tab, int size)
{
	int	x;
	int	y;

	y = 0;
	while (y < size)
	{
		x = 0;
		while (x < size)
		{
			if ((y == 0 && x == 0) || (y == 0 && x == (size - 1))
				|| (y == (size - 1) && x == 0)
				|| (y == (size - 1) && x == (size - 1)))
				ft_putchar('x');
			else
				ft_putchar(tab[x][y] + '0');
			ft_putchar(' ');
			x++;
		}
		ft_putchar('\n');
		y++;
	}
}
