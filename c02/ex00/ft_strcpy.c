/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycornamu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 16:34:14 by ycornamu          #+#    #+#             */
/*   Updated: 2021/07/11 23:12:30 by ycornamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	n;

	n = 0;
	while (*(src + n) != '\0')
	{
		*(dest + n) = *(src + n);
		n++;
	}
	*(dest + n) = *(src + n);
	return (dest);
}

// int main(void)
// {
// 	char src[14] = "Hello World!\n";
// 	char dest[14];
// 
// 	printf("%s", ft_strcpy(dest, src));
// 	printf("%s", dest);
// }
