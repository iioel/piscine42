/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errors.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycornamu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 20:18:10 by ycornamu          #+#    #+#             */
/*   Updated: 2021/07/29 16:44:03 by ycornamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libgen.h>
#include <unistd.h>
#include <string.h>
#include <sys/errno.h>
#include "ft_cat.h"

void	ft_print_error(char *name, char *arg)
{
	char	*error;

	error = strerror(errno);
	ft_putstr(basename(name));
	ft_putstr(": ");
	ft_putstr(arg);
	ft_putstr(": ");
	ft_putstr(error);
	ft_putstr("\n");
}

void	ft_putstr(char *str)
{
	while (*str)
		write(2, str++, 1);
}
