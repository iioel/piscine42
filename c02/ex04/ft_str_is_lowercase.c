/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycornamu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 17:29:48 by ycornamu          #+#    #+#             */
/*   Updated: 2021/07/11 18:12:44 by ycornamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	n;

	n = 0;
	while (*(str + n) != '\0')
	{
		if (! ('a' <= *(str + n) && *(str + n) <= 'z'))
			return (0);
		n++;
	}
	return (1);
}

// int main(void)
// {
// 	char test1[] = "helloworld";
// 	char test2[] = "HelloWorld";
// 
// 	printf("%d\n", ft_str_is_lowercase(test1));
// 	printf("%d\n", ft_str_is_lowercase(test2));
// }
