/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycornamu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 19:34:35 by ycornamu          #+#    #+#             */
/*   Updated: 2021/07/21 19:34:37 by ycornamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);
int		ft_tablen(int size, char **str);
void	ft_strcpy(char **dest, char *src);

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		sep_lenght;
	int		total_lenght;
	char	*tab;
	char	*cpytab;

	i = 0;
	sep_lenght = ft_strlen(sep);
	total_lenght = ft_tablen(size, strs) + (size - 1) * sep_lenght + 1;
	if (! size)
		total_lenght = 1;
	tab = malloc(total_lenght * sizeof(char));
	cpytab = tab;
	while (i < size)
	{
		ft_strcpy(&cpytab, strs[i++]);
		if (i != size)
			ft_strcpy(&cpytab, sep);
	}
	*cpytab = '\0';
	return (tab);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str++))
		i++;
	return (i);
}

int	ft_tablen(int size, char **str)
{
	int	i;

	i = 0;
	while (--size >= 0)
		i += ft_strlen(str[size]);
	return (i);
}

void	ft_strcpy(char **dest, char *src)
{
	int	n;

	n = 0;
	while (*(src + n) != '\0')
	{
		*((*dest)++) = *(src + n);
		n++;
	}
}

// #include <stdio.h>
// 
// int	main(int argc, char **argv)
// {
// 	printf("%s\n", ft_strjoin(argc - 1, argv + 1, "->"));
// }
