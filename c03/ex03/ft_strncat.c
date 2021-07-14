/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycornamu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 14:28:48 by ycornamu          #+#    #+#             */
/*   Updated: 2021/07/14 14:43:40 by ycornamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>

unsigned int	ft_strlen(char *str);

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	size_dest;

	i = 0;
	size_dest = ft_strlen(dest);
	while (src[i] != '\0' && i < nb)
	{
		dest[size_dest + i] = src[i];
		i++;
	}
	dest[size_dest + i] = '\0';
	return (dest);
}

unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

// int	main(void)
// {
// 	int		i;
// 	int		n = 20;
// 	int		c = 10;
// 	char	s1[20] = "Hello";
// 	char	s2[20] = "Hello";
// 	char	*s3;
// 
// 	s3 = " World!";
// 	printf("strncat    : %s\n", strncat(s2, s3, c));
// 	printf("hex       : ");
// 	i = 0;
// 	while (i < n)
// 		printf("%x ", *(s2 + i++));
// 	printf("\n");
// 	printf("ft_strncat : %s\n", ft_strncat(s1, s3, c));
// 	printf("hex       : ");
// 	i = 0;
// 	while (i < n)
// 		printf("%x ", *(s1 + i++));
// 	printf("\n");
// }
