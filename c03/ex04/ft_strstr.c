/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycornamu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 13:10:28 by ycornamu          #+#    #+#             */
/*   Updated: 2021/07/15 00:26:57 by ycornamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

unsigned int	ft_strlen(char *str);
int				ft_strncmp(char *s1, char *s2, unsigned int n);

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	size_str;
	unsigned int	size_to_find;

	i = 0;
	size_str = ft_strlen(str);
	size_to_find = ft_strlen(to_find);
	if (! to_find)
		return (str);
	while ((size_str - i) >= size_to_find)
	{
		if (! ft_strncmp(str + i, to_find, size_to_find))
			return (str + i);
		i++;
	}
	return ((void *)0);
}

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((*(s1 + i) != '\0' || *(s2 + i) != '\0') && i < n)
	{
		if (! (*(s1 + i) == *(s2 + i)))
			return (*(s1 + i) - *(s2 + i));
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	*str1;
// 	char	*str2;
// 
// 	str1 = "Hello World!";
// 	str2 = "w";
// 	printf("strstr    : %ld\n", strstr(str1, str2) - str1);
// 	printf("ft_strstr : %ld\n", ft_strstr(str1, str2) - str1);
// }
