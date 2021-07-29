/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trossel <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 19:42:10 by trossel           #+#    #+#             */
/*   Updated: 2021/07/29 14:04:07 by trossel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

#include "def.h"
#include "read_file.h"
#include "solve.h"

#define BUFFER_NBYTES_MAX 65536

int	parse_map_from_file(char *file_name, t_parser *p)
{
	int			fd;
	int			n_bytes;
	char		buffer[BUFFER_NBYTES_MAX];
	int			okay;

	fd = get_fd(file_name);
	if (fd < 0)
		return (0);
	n_bytes = read(fd, &buffer, BUFFER_NBYTES_MAX - 1);
	while (n_bytes > 0 && (!p->height || p->current_line < p->height))
	{
		buffer[n_bytes] = '\0';
		okay = parse_buffer(p, buffer, n_bytes);
		n_bytes = read(fd, &buffer, BUFFER_NBYTES_MAX - 1);
		if (!okay)
			break ;
	}
	if (fd != 0 && close(fd) == -1)
		return (0);
	if (!okay || n_bytes < 0 || p->current_line < p->height)
		return (0);
	return (1);
}

int	get_fd(char *file_name)
{
	int	fd;

	if (file_name != NULL)
	{
		fd = open(file_name, O_RDONLY);
		if (fd == -1)
			return (-1);
	}
	else
		fd = 0;
	return (fd);
}
