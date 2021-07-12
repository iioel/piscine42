/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycornamu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 23:12:37 by ycornamu          #+#    #+#             */
/*   Updated: 2021/07/12 17:12:23 by ycornamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	int				end;

	i = 0;
	end = 0;
	while (i < n)
	{
		if (*(src + i) == '\0' || end)
		{
			*(dest + i) = '\0';
			end = i;
		}
		else
			*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}

// int main(void)
// {
// 	char src[14] = "Hello World!\n";
// 	char dest[20];
// 
// 	printf("%s", ft_strncpy(dest, src, 20));
// 	printf("%s", dest);
// }
