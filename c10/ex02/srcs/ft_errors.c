/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errors.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycornamu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 20:18:10 by ycornamu          #+#    #+#             */
/*   Updated: 2021/07/29 21:52:43 by ycornamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <sys/errno.h>
#include <libgen.h>
#include "ft_tail.h"

int	ft_print_error(int code, char *name, char *arg)
{
	char	*error;
	char	*error_code[2];

	error_code[0] = "illegal offset";
	error_code[1] = "option requires an argument";
	if (code == -1)
		error = strerror(errno);
	else
		error = error_code[code - 1];
	ft_putstr(basename(name));
	ft_putstr(": ");
	ft_putstr(arg);
	ft_putstr(": ");
	ft_putstr_error(error);
	ft_putstr("\n");
	return (1);
}

void	ft_putstr_error(char *str)
{
	while (*str)
		write(2, str++, 1);
}
