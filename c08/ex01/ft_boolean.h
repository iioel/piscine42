#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>
typedef char	t_bool;

# define EVEN(X) ! (X % 2)
# define TRUE 1
# define FALSE 0

# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"

# define SUCCESS 0

#endif
