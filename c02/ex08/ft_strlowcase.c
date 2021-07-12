/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycornamu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 18:11:11 by ycornamu          #+#    #+#             */
/*   Updated: 2021/07/11 18:13:51 by ycornamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

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
// 	char test1[] = "Hello World! ";
// 
// 	printf("%s\n", ft_strlowcase(test1));
// }
