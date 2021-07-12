/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycornamu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 18:15:37 by ycornamu          #+#    #+#             */
/*   Updated: 2021/07/12 17:06:45 by ycornamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int		ft_char_is_alpha(char c);
int		ft_char_is_lowcase(char c);
int		ft_char_is_numeric(char c);
char	*ft_strlowcase(char *str);

char	*ft_strcapitalize(char *str)
{
	int	n;

	n = 0;
	ft_strlowcase(str);
	while (*(str + n) != '\0')
	{
		if (ft_char_is_lowcase(*(str + n))
			&& (n == 0 || (! ft_char_is_alpha(*(str + n - 1))
					&& ! ft_char_is_numeric(*(str + n - 1)))))
			*(str + n) += ('A' - 'a');
		n++;
	}
	return (str);
}

int	ft_char_is_alpha(char c)
{
	if (! (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z')))
		return (0);
	return (1);
}

int	ft_char_is_lowcase(char c)
{
	if (! ('a' <= c && c <= 'z'))
		return (0);
	return (1);
}

int	ft_char_is_numeric(char c)
{
	if (! ('0' <= c && c <= '9'))
		return (0);
	return (1);
}

char	*ft_strlowcase(char *str)
{
	int	n;

	n = 0;
	while (*(str + n) != '\0')
	{
		if ('A' <= *(str + n) && *(str + n) <= 'Z')
			*(str + n) += ('a' - 'A');
		n++;
	}
	return (str);
}

// int main(void)
// {
// 	char test1[] = "salut, comMent tu vas ?"
// 		" 42mots quaRante-deux; cinquante+et+un";
// 
// 	printf("%s\n", ft_strcapitalize(test1));
// }
