#include "ft_filetools.h"
#include "ft_list.h"
#include "ft_strtools.h"
#include "ft_count.h"
#include "ft_print.h"
#include <stdio.h>
#include <stdlib.h>

int	check_errors(int error);
int	check_args(int ac, char **av, char **file, char **search);

int	main(int ac, char **av)
{
	t_listnbr	*list;
	char		*file;
	char		*search;
	char		*str;
	char		*cpystr;

	if (check_errors(check_args(ac, av, &file, &search)))
		return (1);
	if (check_errors(ft_init_list(&list, &file)))
		return (1);
	while (*search == '0' && *(search + 1))
		search++;
	str = malloc(ft_count(search, list) * sizeof(char));
	if (str == NULL)
		check_errors(1);
	cpystr = str;
	ft_print(search, list, &cpystr);
	ft_strtrim(str);
	ft_putstr(str);
	ft_putstr("\n");
}

int	check_args(int ac, char **av, char **file, char **search)
{
	if (ac == 2)
	{
		if (ft_getfile("numbers.dict", file))
			return (1);
		*search = av[1];
	}
	else if (ac == 3)
	{
		if (ft_getfile(av[1], file))
			return (1);
		*search = av[2];
	}
	else
		return (1);
	if (! ft_is_numeric(*search))
		return (1);
	return (0);
}

int	check_errors(int error)
{
	if (error == 1)
	{
		ft_putstr("Error\n");
		return (1);
	}
	else if (error == 2)
	{
		ft_putstr("Dict error\n");
		return (2);
	}
	return (0);
}
