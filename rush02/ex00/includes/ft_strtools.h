#ifndef FT_STRTOOLS_H
# define FT_STRTOOLS_H

# include "ft_putstr.h"
# include "ft_strcmp.h"
# include "ft_strcount.h"
# include "ft_strtools2.h"

char	*ft_strjoin(char *str1, char *str2, char *sep);
char	*ft_strstrip(char *src, int n);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
void	ft_strcpy(char **dest, char *src);
void	ft_strtrim(char *str);

#endif
