#include "ft_putchar.h"
#include <unistd.h>

void	ft_putchar(const char c)
{
	write(1, &c, 1);
}

void	ft_putnchar(char c, int n)
{
	int	i;

	i = 0;
	while (i++ < n)
		ft_putchar(c);
}
