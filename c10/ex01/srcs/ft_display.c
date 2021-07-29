/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycornamu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 20:18:17 by ycornamu          #+#    #+#             */
/*   Updated: 2021/07/28 04:01:11 by ycornamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/uio.h>
#include <fcntl.h>
#include <unistd.h>
#include "ft_cat.h"

int	ft_display_file(int fd)
{
	int		ncpy;
	char	*buf[BUF_SIZE];

	ncpy = read(fd, buf, BUF_SIZE);
	while (ncpy > 0)
	{
		write(1, buf, ncpy);
		ncpy = read(fd, buf, BUF_SIZE);
	}
	if (ncpy < 0)
		return (1);
	return (0);
}
