#include "ft_strtools.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_strjoin(char *str1, char *str2, char *sep)
{
	int		i;
	int		sep_lenght;
	int		total_lenght;
	char	*tab;
	char	*cpytab;

	i = 0;
	sep_lenght = ft_strlen(sep);
	total_lenght = ft_strlen(str1) + ft_strlen(str2) + sep_lenght + 1;
	tab = malloc(total_lenght * sizeof(char));
	if (tab == NULL)
		return (NULL);
	cpytab = tab;
	ft_strcpy(&cpytab, str1);
	free(str1);
	ft_strcpy(&cpytab, sep);
	ft_strcpy(&cpytab, str2);
	free(str2);
	*cpytab = '\0';
	return (tab);
}

char	*ft_strstrip(char *src, int n)
{
	char	*str;
	char	*copy;

	str = malloc(n * sizeof(char));
	if (str == NULL)
		return (NULL);
	copy = str;
	src[n] = '\0';
	ft_strcpy(&copy, src);
	return (str);
}

void	ft_strcpy(char **dest, char *src)
{
	int	n;

	n = 0;
	while (*(src + n) != '\0')
	{
		*((*dest)++) = *(src + n);
		n++;
	}
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	int				end;

	i = 0;
	end = 0;
	while (i < n)
	{
		if (*(src + i) == '\0' || end)
		{
			*(dest + i) = '\0';
			end = i;
		}
		else
			*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}

void	ft_strtrim(char *str)
{
	int	i;

	ft_skip(&str, " ");
	while (*str)
	{
		if (*(str - 1) == ' ' && (*str == ' ' || *str == '\n'))
		{
			i = 0;
			while (str[i])
			{
				str[i - 1] = str[i];
				i++;
			}
			str[i - 1] = 0;
		}
		str++;
	}
	if (*(--str) == ' ')
		*str = 0;
}
