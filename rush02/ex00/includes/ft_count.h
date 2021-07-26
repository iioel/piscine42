#ifndef FT_COUNT_H
# define FT_COUNT_H

void	ft_modulo_count(int *c, int *size, char *str, t_listnbr *dict);
char	*ft_split(char *str, int size);
int		ft_count_tens(char *str, t_listnbr *dict);
int		ft_count_hundreds(char *str, t_listnbr *dict);
int		ft_count(char *str, t_listnbr *dict);

#endif
