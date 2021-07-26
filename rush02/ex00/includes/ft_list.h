#ifndef FT_LIST_H
# define FT_LIST_H

typedef struct s_listnbr	t_listnbr;
struct s_listnbr
{
	char		*nbr;
	char		*str;
	t_listnbr	*next;
};

int		ft_init_list(t_listnbr **list, char **str);
void	ft_insert_list(t_listnbr **list, char *nbr, char *str);
char	*ft_find_nbr(char *str, t_listnbr *list);

#endif
