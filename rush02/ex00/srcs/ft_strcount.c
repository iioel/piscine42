#include "ft_strcount.h"
#include "ft_strcmp.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str++))
		i++;
	return (i);
}

int	ft_strlen_until(char *str, char *sep)
{
	int	i;

	i = 0;
	while (*str && ft_is_in_str(*str, sep) == -1)
	{
		str++;
		i++;
	}
	return (i);
}
