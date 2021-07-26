#include "ft_putstr.h"
#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		if (*str != '0')
			write(1, str, 1);
		str++;
	}
}
