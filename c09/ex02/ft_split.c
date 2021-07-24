#include <stdlib.h>

int	ft_size_word(char *str, char *charset);
int	ft_count_words(char *str, char *charset);
int	ft_is_in_str(char c, char *base);

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	char	*word;
	char	**tab;

	i = 0;
	tab = malloc((ft_count_words(str, charset) + 2) * sizeof(char *));
	while (*str)
	{
		while (*str && ft_is_in_str(*str, charset) != -1)
			str++;
		j = 0;
		if (ft_size_word(str, charset))
		{
			word = malloc((ft_size_word(str, charset) + 1) * sizeof(char));
			while (*str && ft_is_in_str(*str, charset) == -1)
			{
				word[j++] = *(str++);
			}
			word[j] = '\0';
			tab[i++] = word;
		}
	}
	tab[i] = 0;
	return (tab);
}

int	ft_size_word(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && ft_is_in_str(str[i], charset) == -1)
		i++;
	return (i);
}

int	ft_count_words(char *str, char *charset)
{
	int	size;
	int	nb_words;

	nb_words = 0;
	while (*str)
	{
		while (*str && ft_is_in_str(*str, charset) != -1)
			str++;
		size = ft_size_word(str, charset);
		if (size)
		{
			nb_words++;
			str += size;
		}
	}
	return (nb_words);
}

int	ft_is_in_str(char c, char *base)
{
	int	skip;

	skip = 0;
	while (*(base + skip))
		if (c == *(base + skip++))
			return (skip - 1);
	return (-1);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int		i;
// 	char	**tab;
// 
// 	i = 0;
// 	tab = ft_split("hello, comment vas-tu ?", ",-?");
// 	while (tab[i])
// 	{
// 		printf("#%d : \"%s\"\n", i, tab[i]);
// 		i++;
// 	}
// }
