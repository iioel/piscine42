/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycornamu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 09:43:27 by ycornamu          #+#    #+#             */
/*   Updated: 2021/07/28 09:43:29 by ycornamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int(*f)(char*))
{
	int	res;

	res = 0;
	while (*tab)
		if (f(*(tab++)))
			res = 1;
	return (res);
}

// #include <stdio.h>
// 
// int ft_test(char *str)
// {
// 	if (*str)
// 		return (0);
// 	return (1);
// }
// 
// int main(int ac, char **av)
// {
// 	av[ac] = (void *)0;
// 
// 	printf("%d\n", ft_any(av + 1, &ft_test));
// }
