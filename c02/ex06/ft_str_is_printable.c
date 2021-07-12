/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycornamu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 17:42:13 by ycornamu          #+#    #+#             */
/*   Updated: 2021/07/11 18:13:17 by ycornamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	n;

	n = 0;
	while (*(str + n) != '\0')
	{
		if (! (' ' <= *(str + n) && *(str + n) <= '~'))
			return (0);
		n++;
	}
	return (1);
}

// int main(void)
// {
// 	char test1[] = "Hello World! ";
// 	char test2[] = "Hello World!\n";
// 
// 	printf("%d\n", ft_str_is_printable(test1));
// 	printf("%d\n", ft_str_is_printable(test2));
// }
