#include <stdlib.h>

int		ft_digitnbr(unsigned int nb, unsigned int base);
int		ft_base_is_valid(char *base);
int		ft_atoi(char *str, int size, char *base);
int		ft_get_sign(char **str);
int		ft_is_in_base(char c, char *base, int skip);
void	ft_putnbr_base(int nbr, int size, char **out, char *base);
void	ft_print_nbr_base(unsigned int nbr, unsigned int size_base,
			char **out, char *base);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	unsigned int	size_from;
	unsigned int	size_to;
	char			*out;
	char			*cpyout;
	int				nb;

	size_from = ft_base_is_valid(base_from);
	size_to = ft_base_is_valid(base_to);
	if (! size_from || ! size_to)
		return (NULL);
	while (*nbr == '\t' || *nbr == '\n' || *nbr == '\v'
		|| *nbr == '\f' || *nbr == '\r' || *nbr == ' ')
		nbr++;
	nb = ft_atoi(nbr, size_from, base_from);
	if (nb < 0)
		out = malloc((ft_digitnbr(nb, size_to) + 1) * sizeof(char));
	else
		out = malloc(ft_digitnbr(nb, size_to) * sizeof(char));
	cpyout = out;
	ft_putnbr_base(nb, size_to, &cpyout, base_to);
	*cpyout = '\0';
	return (out);
}

int	ft_atoi(char *str, int size, char *base)
{
	int	result;
	int	factor;

	result = 0;
	factor = ft_get_sign(&str);
	while (ft_is_in_base(*str, base, 0) != -1)
	{
		result *= size;
		result += ft_is_in_base(*(str++), base, 0);
	}
	return (result * factor);
}

void	ft_putnbr_base(int nbr, int size, char **out, char *base)
{
	unsigned int	u_nbr;

	if (nbr < 0)
	{
		*((*out)++) = '-';
		u_nbr = (unsigned int)(nbr * -1);
	}
	else
		u_nbr = nbr;
	ft_print_nbr_base(u_nbr, size, out, base);
}

void	ft_print_nbr_base(unsigned int nbr, unsigned int size_base,
			char **out, char *base)
{
	if (nbr >= size_base)
	{
		ft_print_nbr_base(nbr / size_base, size_base, out, base);
		ft_print_nbr_base(nbr % size_base, size_base, out, base);
	}
	else
		*((*out)++) = base[nbr];
}

int	ft_digitnbr(unsigned int nb, unsigned int base)
{
	unsigned int	nb_digit;

	if (nb)
		nb_digit = 0;
	else
		nb_digit = 1;
	while (nb)
	{
		nb /= base;
		nb_digit++;
	}
	return (nb_digit);
}

// #include <stdio.h>
// 
// int	main(void)
// {
// 	printf("%s\n", ft_convert_base("2", "0123456789", "01"));
// }
