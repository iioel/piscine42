/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycornamu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 04:17:33 by ycornamu          #+#    #+#             */
/*   Updated: 2021/07/29 20:07:44 by ycornamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/uio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "ft_tail.h"

char	*ft_file_to_str(int fd)
{
	int		ncpy;
	char	*str;
	char	*tmp;
	char	buf[BUF_SIZE];

	str = malloc(1);
	if (!str)
		return (NULL);
	*str = 0;
	ncpy = read(fd, buf, BUF_SIZE - 1);
	while (ncpy > 0)
	{
		buf[ncpy] = 0;
		tmp = ft_strjoin(str, buf);
		if (!tmp)
			return (NULL);
		free(str);
		str = tmp;
		ncpy = read(fd, buf, BUF_SIZE - 1);
	}
	if (ncpy < 0)
		return (NULL);
	return (str);
}

void	ft_display_str_from_end(char *str, int n)
{
	while (*str)
		str++;
	while (n--)
		str--;
	while (*str)
		write(1, str++, 1);
}
