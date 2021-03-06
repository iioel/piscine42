/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycornamu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 11:21:51 by ycornamu          #+#    #+#             */
/*   Updated: 2021/07/14 12:16:50 by ycornamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>

unsigned int	ft_strlen(char *str);

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	size_dest;

	i = 0;
	size_dest = ft_strlen(dest);
	while (src[i] != '\0')
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
// 	int		n = 13;
// 	char	s1[13] = "Hello";
// 	char	s2[13] = "Hello";
// 	char	*s3;
// 
// 	s3 = " World!";
// 	printf("strcat    : %s\n", strcat(s2, s3));
// 	printf("hex       : ");
// 	i = 0;
// 	while (i < n)
// 		printf("%x ", *(s2 + i++));
// 	printf("\n");
// 	printf("ft_strcat : %s\n", ft_strcat(s1, s3));
// 	printf("hex       : ");
// 	i = 0;
// 	while (i < n)
// 		printf("%x ", *(s1 + i++));
// 	printf("\n");
// }
