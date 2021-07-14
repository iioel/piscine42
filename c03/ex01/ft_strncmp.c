/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycornamu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 10:56:19 by ycornamu          #+#    #+#             */
/*   Updated: 2021/07/13 16:46:14 by ycornamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((*(s1 + i) != '\0' || *(s2 + i) != '\0') && i < n)
	{
		if (! (*(s1 + i) == *(s2 + i)))
			return (*(s1 + i) - *(s2 + i));
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	int		n;
// 	char	*test1;
// 	char	*test2;
// 
// 	n = 4;
// 	test1 = "aaaax";
// 	test2 = "aaaa";
// 	printf("strncmp    : %d\n", strncmp(test1, test2, n));
// 	printf("ft_strncmp : %d\n", ft_strncmp(test1, test2, n));
// }
