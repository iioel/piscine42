int		ft_atoi(char *str, int size, char *base);
int		ft_get_sign(char **str);
int		ft_is_in_base(char c, char *base, int skip);
void	ft_putnbr_base(int nbr, int size, char **out, char *base);
void	ft_print_nbr_base(unsigned int nbr, unsigned int size_base,
			char **out, char *base);
int		ft_digitnbr(unsigned int nb, unsigned int base);
int		ft_base_is_valid(char *base);

int	ft_base_is_valid(char *base)
{
	unsigned int	size_base;

	size_base = 0;
	while (base[size_base])
	{
		if (base[size_base] == '-' || base[size_base] == '+'
			|| base[size_base] == ' '
			|| ft_is_in_base(base[size_base], base, size_base + 1) != -1)
			return (0);
		size_base++;
	}
	if (size_base <= 1)
		return (0);
	return (size_base);
}

int	ft_is_in_base(char c, char *base, int skip)
{
	while (*(base + skip))
		if (c == *(base + skip++))
			return (skip - 1);
	return (-1);
}

int	ft_get_sign(char **str)
{
	int	result;

	result = 1;
	while (**str == '+' || **str == '-')
		if (*((*str)++) == '-')
			result *= -1;
	return (result);
}
