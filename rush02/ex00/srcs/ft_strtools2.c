#include "ft_strtools.h"
#include "ft_strtools2.h"
#include <stdlib.h>

void	ft_nextline(char **str)
{
	while (**str && **str != '\n')
		(*str)++;
	(*str)++;
}

void	ft_skip(char **str, char *sep)
{
	while (**str && ft_is_in_str(**str, sep) != -1)
		(*str)++;
}

char	*ft_get_zeros(char *nbr, int offset)
{
	char	*tab;
	char	tmp[255];
	int		nb_zeros;
	int		c;

	c = 0;
	tab = tmp;
	nb_zeros = 0;
	while (c < 3)
	{
		if (nbr[c] && nbr[c] != '0')
			nb_zeros = ft_strlen(nbr) - offset;
		c++;
	}
	if (nb_zeros >= 3)
	{
		c = 1;
		tab[0] = '1';
		while (c <= nb_zeros)
			tab[c++] = '0';
		tab[c] = '\0';
		return (tab);
	}
	return ("");
}

char	*ft_split(char *str, int size)
{
	char	*nbr_part;
	char	tab[4];
	int		c;

	c = 0;
	nbr_part = tab;
	while (c < size)
	{
		nbr_part[c] = str[c];
		c++;
	}
	nbr_part[c] = '\0';
	return (nbr_part);
}

char	**ft_append_to_str(char *str, char **str_to_print)
{
	while (*str)
		*((*str_to_print)++) = *(str++);
	return (str_to_print);
}
