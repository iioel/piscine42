/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycornamu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 17:37:57 by ycornamu          #+#    #+#             */
/*   Updated: 2021/07/11 18:13:04 by ycornamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	n;

	n = 0;
	while (*(str + n) != '\0')
	{
		if (! ('A' <= *(str + n) && *(str + n) <= 'Z'))
			return (0);
		n++;
	}
	return (1);
}

// int main(void)
// {
// 	char test1[] = "HELLOWORLD";
// 	char test2[] = "HelloWorld";
// 
// 	printf("%d\n", ft_str_is_uppercase(test1));
// 	printf("%d\n", ft_str_is_uppercase(test2));
// }
