/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycornamu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 18:07:33 by ycornamu          #+#    #+#             */
/*   Updated: 2021/07/19 18:28:57 by ycornamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_remove_space(char **str);
int		ft_get_sign(char **str);
int		ft_base_is_valid(char *base);
int		ft_is_in_base(char c, char *base, int skip);

int	ft_atoi_base(char *str, char *base)
{
	int				factor;
	int				result;
	unsigned int	size_base;

	size_base = ft_base_is_valid(base);
	result = 0;
	while (*str == '\t' || *str == '\n' || *str == '\v'
		|| *str == '\f' || *str == '\r' || *str == ' ')
		str++;
	factor = ft_get_sign(&str);
	while (ft_is_in_base(*str, base, 0) != -1)
	{
		result *= size_base;
		result += ft_is_in_base(*(str++), base, 0);
	}
	return (result * factor);
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

int	ft_base_is_valid(char *base)
{
	unsigned int	size_base;

	size_base = 0;
	while (base[size_base])
	{
		if (base[size_base] == '-' || base[size_base] == '+'
			|| ft_is_in_base(base[size_base], base, size_base + 1) != -1)
			return (0);
		size_base++;
	}
	if (size_base < 1)
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

// #include <stdio.h>
// 
// int	main(void)
// {
// 	char *str = "f";
// 	printf("\"%s\", %d\n", str, ft_atoi_base(str, "0123456789abcdef"));
// }
