/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errors.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycornamu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 20:18:10 by ycornamu          #+#    #+#             */
/*   Updated: 2021/07/28 04:19:03 by ycornamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_errors.h"
#include <unistd.h>

void	ft_print_error(int code)
{
	char	*error[3];

	error[0] = "File name missing.\n";
	error[1] = "Too many arguments.\n";
	error[2] = "Cannot read file.\n";
	ft_putstr(error[code - 1]);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(2, str++, 1);
}
