#include "ft_display.h"

int main(int ac, char **av)
{
	if (ac == 1)
		ft_print_error(1);
	else if (ac == 2)
		ft_display_file(av[1]);
	else
		ft_print_error(2);
}

