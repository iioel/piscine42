#ifndef FT_FILETOOLS_H
# define FT_FILETOOLS_H

# include "ft_list.h"
# define BUF_SIZE 4096

int		ft_getfile(char *file, char **str);
char	*ft_getnbr(char **str);
char	*ft_getstr(char *str);

#endif
