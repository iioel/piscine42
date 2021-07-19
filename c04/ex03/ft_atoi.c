/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycornamu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 18:07:33 by ycornamu          #+#    #+#             */
/*   Updated: 2021/07/18 23:25:43 by ycornamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_remove_space(char **str);
int		ft_get_sign(char **str);

int	ft_atoi(char *str)
{
	int	factor;
	int	result;

	result = 0;
	ft_remove_space(&str);
	factor = ft_get_sign(&str);
	printf("%s\n", str);
	while (*str >= '0' && *str <= '9')
	{
		result *= 10;
		result += *(str++) - '0';
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

char	*ft_remove_space(char **str)
{
	while (**str == '\t' || **str == '\n' || **str == '\v'
		|| **str == '\f' || **str == '\r' || **str == ' ')
		(*str)++;
	return (*str);
}

// int	main(void)
// {
// 	char *str = "    --+--+-+-12r548ferybfrueb";
// 	printf("\"%s\", %d\n", str, ft_atoi(str));
// }
