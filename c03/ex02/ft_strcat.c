/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycornamu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 11:21:51 by ycornamu          #+#    #+#             */
/*   Updated: 2021/07/12 17:27:33 by ycornamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>

unsigned int	ft_strlen(char *str);

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	size_src;
	unsigned int	size_dest;
	unsigned int	i;

	size_src = ft_strlen(src);
	size_dest = ft_strlen(dest);
	i = size_dest - 1;
	while (*(src + i - size_dest - 1) != '\0')
	{
		*(dest + i) = *(src + i - size_dest - 1);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}

unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
		i++;
	return (i);
}

// int	main(void)
// {
// 	char s1[13] = "Hello";
// 	char s2[] = " World!";
// 
// 	printf("strcat    : %s\n", strcat(s1, s2));
// 	printf("ft_strcat : %s\n", ft_strcat(s1, s2));
// }
