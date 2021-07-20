/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycornamu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 02:17:21 by ycornamu          #+#    #+#             */
/*   Updated: 2021/07/20 02:17:24 by ycornamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	res;

	res = 0;
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	if (index >= 0)
	{
		res += ft_fibonacci(index - 1);
		res += ft_fibonacci(index - 2);
	}
	return (res);
}

// #include <stdio.h>
// 
// int main(void)
// {
// 	printf("%d\n", ft_fibonacci(3));
// }
