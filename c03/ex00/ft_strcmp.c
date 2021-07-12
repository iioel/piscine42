/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycornamu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 23:36:52 by ycornamu          #+#    #+#             */
/*   Updated: 2021/07/12 11:14:18 by ycornamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>
unsigned int	ft_strlen(char *str);

int	ft_strcmp(char *s1, char *s2)
{
	int	n;
	int	size_s1;
	int	size_s2;

	n = 0;
	size_s1 = ft_strlen(s1);
	size_s2 = ft_strlen(s2);
	while (*(s1 + n) != '\0' || *(s1 + n) != '\0')
	{
		if (*(s1 + n) > *(s2 + n))
			return (1);
		else if (*(s1 + n) < *(s2 + n))
			return (-1);
		n++;
	}
	if (size_s1 > size_s2)
		return (1);
	else if (size_s1 < size_s2)
		return (-1);
	return (0);
}

unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
		i++;
	return (i);
}

// int	main(void)
// {
// 	printf("strcmp    :%d\n", strcmp("afcc", "aecc"));
// 	printf("ft_strcmp :%d\n", ft_strcmp("afcc", "aecc"));
// }
