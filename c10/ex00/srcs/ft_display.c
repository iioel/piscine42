/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycornamu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 20:18:17 by ycornamu          #+#    #+#             */
/*   Updated: 2021/07/27 20:24:11 by ycornamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/uio.h>
#include <fcntl.h>
#include <unistd.h>
#include "ft_display.h"
#include "ft_errors.h"

int	ft_display_file(char *file)
{
	int		fd;
	int		ncpy;
	char	*buf[BUF_SIZE];

	fd = open(file, O_RDONLY);
	if (fd < 0)
	{
		ft_print_error(3);
		return (3);
	}
	ncpy = read(fd, buf, BUF_SIZE - 1);
	while (ncpy > 0)
	{
		write(1, buf, ncpy);
		ncpy = read(fd, buf, BUF_SIZE - 1);
	}
	close(fd);
	if (ncpy < 0)
		return (3);
	return (0);
}
