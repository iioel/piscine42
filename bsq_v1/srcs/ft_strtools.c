#include "ft.h"
#include "ft_strtools.h"
#include <stdlib.h>

char	*ft_strjoin(char *str1, char *str2, char *sep)
{
	int		total_lenght;
	char	*out_str;

	total_lenght = ft_strlen(str1) + ft_strlen(str2) + ft_strlen(sep) + 1;
	out_str = malloc(total_lenght * sizeof(char));
	*out_str = 0;
	ft_strcat(out_str, str1);
	ft_strcat(out_str, sep);
	ft_strcat(out_str, str2);
	return (out_str);
}

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	size_dest;

	i = 0;
	size_dest = ft_strlen(dest);
	while (src[i])
	{
		dest[size_dest + i] = src[i];
		i++;
	}
	dest[size_dest + i] = 0;
	return (dest);
}

int	ft_atoi(char *str)
{
	int	factor;
	int	result;

	factor = 1;
	result = 0;
	if (*str == '-')
	{
		factor = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
		result = result * 10 + *(str++) - '0';
	return (result * factor);
}
