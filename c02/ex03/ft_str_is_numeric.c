/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycornamu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 17:26:04 by ycornamu          #+#    #+#             */
/*   Updated: 2021/07/11 23:12:57 by ycornamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	n;

	n = 0;
	while (*(str + n) != '\0')
	{
		if (! ('0' <= *(str + n) && *(str + n) <= '9'))
			return (0);
		n++;
	}
	return (1);
}

// int main(void)
// {
// 	char test1[] = "0328452843";
// 	char test2[] = "987 432423";
// 
// 	printf("%d\n", ft_str_is_numeric(test1));
// 	printf("%d\n", ft_str_is_numeric(test2));
// }
