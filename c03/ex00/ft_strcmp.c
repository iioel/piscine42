/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycornamu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 23:36:52 by ycornamu          #+#    #+#             */
/*   Updated: 2021/07/13 16:41:35 by ycornamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	n;

	n = 0;
	while (*(s1 + n) != '\0' || *(s2 + n) != '\0')
	{
		if (! (*(s1 + n) == *(s2 + n)))
			return (*(s1 + n) - *(s2 + n));
		n++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	*test1;
// 	char	*test2;
// 
// 	test1 = "aaz";
// 	test2 = "aaaa";
// 	printf("strcmp    : %d\n", strcmp(test1, test2));
// 	printf("ft_strcmp : %d\n", ft_strcmp(test1, test2));
// }
