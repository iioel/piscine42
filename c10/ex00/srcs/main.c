/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycornamu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 20:17:45 by ycornamu          #+#    #+#             */
/*   Updated: 2021/07/28 04:19:22 by ycornamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display.h"
#include "ft_errors.h"

int	main(int ac, char **av)
{
	if (ac == 1)
		ft_print_error(1);
	else if (ac == 2)
		ft_display_file(av[1]);
	else
		ft_print_error(2);
}
