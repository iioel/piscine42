#ifndef FT_PRINT_H
# define FT_PRINT_H

# include "ft_list.h"

void	ft_print_hundreds(char *str, t_listnbr *dict, char **str_to_print);
void	ft_print_tens(char *str, t_listnbr *dict, char **str_to_print);
void	ft_print(char *str, t_listnbr *dict, char **str_to_print);
void	ft_modulo_print(int *c, char **str2, char *str, t_listnbr *dict);

#endif
