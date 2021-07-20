#include <unistd.h>

int		ft_strcmp(char *s1, char *s2);
void	ft_sort_string(int nb, char **list_string);

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		ft_sort_string(argc - 1, (argv + 1));
		while (*(++argv) != NULL)
		{
			while (**argv)
				write(1, (*argv)++, 1);
			write(1, "\n", 1);
		}
	}
}

void	ft_sort_string(int nb, char **list_string)
{
	char	*tmp_string;
	int		i;
	int		j;

	i = 0;
	j = 1;
	while (j)
	{
		i = 0;
		j = 0;
		while (i < nb)
		{
			if (i != 0 && ft_strcmp(list_string[i - 1], list_string[i]) > 0)
			{
				tmp_string = list_string[i];
				list_string[i] = list_string[i - 1];
				list_string[i - 1] = tmp_string;
				j++;
			}
			i++;
		}
	}
}

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
