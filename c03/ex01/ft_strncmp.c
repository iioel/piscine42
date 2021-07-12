/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycornamu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 10:56:19 by ycornamu          #+#    #+#             */
/*   Updated: 2021/07/12 11:14:50 by ycornamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>
unsigned int	ft_strlen(char *str);

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				size_s1;
	int				size_s2;
	unsigned int	i;

	i = 0;
	size_s1 = ft_strlen(s1);
	size_s2 = ft_strlen(s2);
	while ((*(s1 + i) != '\0' || *(s1 + i) != '\0') && i < n)
	{
		if (*(s1 + i) > *(s2 + i))
			return (1);
		else if (*(s1 + i) < *(s2 + i))
			return (-1);
		i++;
	}
	if (size_s1 > size_s2 && i < n)
		return (1);
	else if (size_s1 < size_s2 && i < n)
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
// 	printf("strncmp    :%d\n", strncmp("aecc", "aecce", 5));
// 	printf("ft_strncmp :%d\n", ft_strncmp("aecc", "aecce", 5));
// }
