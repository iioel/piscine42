/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycornamu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 14:28:13 by ycornamu          #+#    #+#             */
/*   Updated: 2021/07/14 14:52:50 by ycornamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>

unsigned int	ft_strlen(char *str);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	size_dest;

	i = 0;
	size_dest = ft_strlen(dest);
	while (src[i] != '\0' && (size_dest + i + 1) < size)
	{
		dest[size_dest + i] = src[i];
		i++;
	}
	dest[size_dest + i] = '\0';
	return (size_dest + i);
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
// 	int		c = 20;
// 	char	s1[20] = "Hello";
// 	char	s2[20] = "Hello";
// 	char	*s3;
// 
// 	s3 = " World!";
// 	printf("strlcat    : %lu, %s\n", strlcat(s2, s3, c), s2);
// 	printf("hex       : ");
// 	i = 0;
// 	while (i < n)
// 		printf("%x ", *(s2 + i++));
// 	printf("\n");
// 	printf("ft_strlcat : %d, %s\n", ft_strlcat(s1, s3, c), s1);
// 	printf("hex       : ");
// 	i = 0;
// 	while (i < n)
// 		printf("%x ", *(s1 + i++));
// 	printf("\n");
// }
