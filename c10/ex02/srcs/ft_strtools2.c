/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtools2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycornamu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 21:16:30 by ycornamu          #+#    #+#             */
/*   Updated: 2021/07/29 21:23:21 by ycornamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_tail.h"

void	ft_print_file_header(char *name)
{
	ft_putstr("==> ");
	ft_putstr(name);
	ft_putstr(" <==\n");
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}
