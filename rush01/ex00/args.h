#ifndef ARGS_H
# define ARGS_H

int		**ft_init_tab(char *str, int *size);
int		ft_find_next_digit(char **str);
int		ft_count_args(char *str);
void	ft_get_coord(int size_tab, int i, int *x, int *y);
int		ft_define_vars(int *i, int *x, int *y, int nb_args);

#endif
