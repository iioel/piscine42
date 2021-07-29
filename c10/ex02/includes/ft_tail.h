/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycornamu <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 04:11:49 by ycornamu          #+#    #+#             */
/*   Updated: 2021/07/29 21:48:40 by ycornamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TAIL_H
# define FT_TAIL_H

# define BUF_SIZE 4096

// main.c
int		ft_get_c_opt(int ac, char **av, int *offset);
int		ft_is_numeric(char *str);
int		ft_get_fd(char **av, int *i);
void	ft_exec(int fd, int i, char **av, int offset);

// ft_strtools.c
char	*ft_strjoin(char *str1, char *str2);
char	*ft_strcat(char *dest, char *src);
int		ft_strncmp(char *str1, char *str2, int n);
int		ft_strlen(char *str);
int		ft_atoi(char *str);

// ft_strtools2.c
void	ft_putstr(char *str);
void	ft_print_file_header(char *name);

// ft_file.c
char	*ft_file_to_str(int fd);
void	ft_display_str_from_end(char *str, int n);

// ft_errors.c
void	ft_putstr_error(char *str);
int		ft_print_error(int code, char *name, char *arg);

#endif
