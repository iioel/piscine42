#include <stdlib.h>

char	**ft_split(char *str, char *charset)
{
	
}

char *find_next_word(char **str, char *charset)
{
	int		i;
	char	*word;

	i = 0;
	while (ft_is_in_str(**str, *charset) && **str)
		(*str)++;
	word = *str;
	while (! ft_is_in_str(*((*str)++), *charset) || **str)
		(*str)++;
	return (word);
}

int	ft_wordlen(char *str, char *charset)
{
	int i;

	i = 0;
	while (! ft_is_in_str(*((*str)++), *charset) || **str)
	
}

int	ft_is_in_str(char c, char *str)
{
	while (*str)
		if (c == *str)
			return (1);
	return (0);
}
