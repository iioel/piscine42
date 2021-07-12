/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycornamu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 17:09:27 by ycornamu          #+#    #+#             */
/*   Updated: 2021/07/12 17:11:48 by ycornamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	n;

	n = 0;
	while (*(str + n) != '\0')
	{
		if (! (('a' <= *(str + n) && *(str + n) <= 'z')
				|| ('A' <= *(str + n) && *(str + n) <= 'Z')))
			return (0);
		n++;
	}
	return (1);
}

// int main(void)
// {
// 	char test1[] = "HelloWorld";
// 	char test2[] = "Hello World";
// 
// 	printf("%d\n", ft_str_is_alpha(test1));
// 	printf("%d\n", ft_str_is_alpha(test2));
// }
