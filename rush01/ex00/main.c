#include "args.h"
#include "backtrack.h"
#include "tab_tools.h"
#include "ft_print_tab.h"

int	main(int argc, char **argv)
{
	int	**tab;
	int	size;

	if (argc > 1)
	{
		tab = ft_init_tab(argv[1], &size);
		tab = ft_find_init_numbers(tab, size);
		if (backtrack(tab, size))
			ft_putstr("Error\n");
		else
			ft_print_tab(tab, size);
	}
}
