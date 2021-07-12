/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycornamu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 17:35:29 by ycornamu          #+#    #+#             */
/*   Updated: 2021/07/12 18:01:36 by ycornamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

unsigned int	ft_strlen(char *str);

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	size_src;
	unsigned int	size_dest;
	unsigned int	i;

	size_dest = ft_strlen(dest);
	size_src = ft_strlen(src);
	printf("dest_s : %d, src_s : %d\n", size_dest, size_src);
	i = 0;
	while (*(src + i) != '\0' && i <= nb)
	{
		printf("i : %d, nb : %d, dest : %d, src : %c\n", i, nb, size_dest + i, *(src + i));
		*(dest + size_dest + i) = *(src + i);
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

int	main(void)
{
	char s1[20] = "Helloc";
	char s2[] = " World!";

	printf("s1 : %d\n", ft_strlen(s1));
	printf("s2 : %d\n", ft_strlen(s2));
	printf("strncat    : %s\n", strncat(s1, s2, 6));
	printf("ft_strncat : %s\n", ft_strncat(s1, s2, 6));
}
