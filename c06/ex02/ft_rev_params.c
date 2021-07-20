#include <unistd.h>

int	main(int argc, char **argv)
{
	while (--argc > 0)
	{
		while (*argv[argc])
			write(1, (argv[argc])++, 1);
		write(1, "\n", 1);
	}
}
