#ifndef FT_STRTOOLS2_H
# define FT_STRTOOLS2_H

void	ft_nextline(char **str);
void	ft_skip(char **str, char *sep);
//char	*ft_get_zeros(int nb_zeros);
char	*ft_get_zeros(char *nbr, int offset);
char	*ft_split(char *str, int size);
char	**ft_append_to_str(char *str, char **str_to_print);

#endif
