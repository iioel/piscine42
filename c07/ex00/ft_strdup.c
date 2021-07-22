/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycornamu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 19:34:24 by ycornamu          #+#    #+#             */
/*   Updated: 2021/07/22 01:02:50 by ycornamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str);

void	*ft_strdup(char *src)
{
	int		i;
	int		size;
	char	*dest;

	i = 0;
	size = ft_strlen(src);
	dest = malloc((size + 1) * sizeof(char));
	if (dest == NULL)
		return (dest);
	while (*src)
	{
		dest[i++] = *(src++);
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str++))
		i++;
	return (i);
}

// #include <unistd.h>
// 
// int	main(void)
// {
// 	char *str = "";
// 	char *dest;
// 
// 	dest = ft_strdup(str);
// 	while (*str)
// 		write(1, str++, 1);
// 	write(1, "\n", 1);
// 	while (*dest)
// 		write(1, dest++, 1);
// 	write(1, "\n", 1);
// }
