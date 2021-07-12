/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycornamu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 18:07:33 by ycornamu          #+#    #+#             */
/*   Updated: 2021/07/11 18:13:38 by ycornamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	n;

	n = 0;
	while (*(str + n) != '\0')
	{
		if ('a' <= *(str + n) && *(str + n) <= 'z')
			*(str + n) -= ('a' - 'A');
		n++;
	}
	return (str);
}

// int main(void)
// {
// 	char test1[] = "Hello World! ";
// 
// 	printf("%s\n", ft_strupcase(test1));
// }
