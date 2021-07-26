#include "ft_strcmp.h"

int	ft_strcmp(char *s1, char *s2)
{
	int	n;

	n = 0;
	while (*(s1 + n) != '\0' || *(s2 + n) != '\0')
	{
		if (! (*(s1 + n) == *(s2 + n)))
			return (*(s1 + n) - *(s2 + n));
		n++;
	}
	return (0);
}

int	ft_is_in_str(char c, char *str)
{
	int	skip;

	skip = 0;
	while (*(str + skip))
		if (c == *(str + skip++))
			return (skip - 1);
	return (-1);
}

int	ft_is_numeric(char *str)
{
	while (*str)
	{
		if (! (*str >= '0' && *str <= '9'))
			return (0);
		str++;
	}
	return (1);
}
