/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycornamu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 03:36:12 by ycornamu          #+#    #+#             */
/*   Updated: 2021/07/28 03:57:44 by ycornamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CAT_H
# define FT_CAT_H

# define BUF_SIZE 4096

// ft_strcmp.c
int		ft_strcmp(char *str1, char *str2);

// ft_display.c
int		ft_display_file(int fd);

// ft_errors.c
void	ft_putstr(char *str);
void	ft_print_error(char *name, char *arg);

#endif
