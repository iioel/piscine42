#include <stdlib.h>
#include <stdio.h>
#include "args.h"
#include "ft_print_tab.h"
#include "tab_tools.h"

int	**ft_init_tab(char *str, int *size_tab)
{
	int	**tab;
	int	i;
	int	x;
	int	y;
	int	nb_args;

	nb_args = ft_count_args(str);
	if (! (nb_args % 4))
	{
		*size_tab = ft_define_vars(&i, &x, &y, nb_args);
		tab = ft_create_tab(*size_tab);
		while (i < nb_args)
		{
			if (i < ((*size_tab - 2) * 2))
				tab[x++][y] = ft_find_next_digit(&str);
			else if (i < ((*size_tab - 2) * 4))
				tab[x][y++] = ft_find_next_digit(&str);
			ft_get_coord(*size_tab, i, &x, &y);
			i++;
		}
		return (tab);
	}
	return (NULL);
}

int	ft_define_vars(int *i, int *x, int *y, int nb_args)
{
	int	size_tab;

	*i = 0;
	*x = 1;
	*y = 0;
	size_tab = nb_args / 4 + 2;
	return (size_tab);
}

void	ft_get_coord(int size_tab, int i, int *x, int *y)
{
	if (i == (size_tab - 3))
	{
		*x = 1;
		*y = size_tab - 1;
	}
	else if (i == ((size_tab - 2) * 2 - 1))
	{
		*x = 0;
		*y = 1;
	}
	else if (i == ((size_tab - 2) * 3 - 1))
	{
		*x = size_tab - 1;
		*y = 1;
	}
}

int	ft_count_args(char *str)
{
	int	nb_args;
	int	digit;

	nb_args = 0;
	digit = ft_find_next_digit(&str);
	while (digit >= 0)
	{
		digit = ft_find_next_digit(&str);
		nb_args++;
	}
	return (nb_args);
}

int	ft_find_next_digit(char **str)
{
	int	res;

	if (**str == ' ' && **str)
		(*str)++;
	if (**str >= '0' && **str <= '9' && **str)
	{
		res = **str - '0';
		(*str)++;
		return (res);
	}
	return (-1);
}
