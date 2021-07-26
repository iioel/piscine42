#include "ft_list.h"
#include "ft_strtools.h"
#include "ft_filetools.h"
#include <stdlib.h>

int	ft_init_list(t_listnbr **list, char **str)
{
	char	*nbr;
	char	*nbr_str;

	while (**str != '\0')
	{
		if (**str != '\n')
		{
			nbr = ft_getnbr(str);
			nbr_str = ft_getstr(*str);
			if (! (nbr != NULL && nbr_str != NULL))
				return (1);
			else if (! (*nbr != 0 && *nbr_str != 0))
				return (2);
			ft_insert_list(list, nbr, nbr_str);
		}
		ft_nextline(str);
	}
	return (0);
}

void	ft_insert_list(t_listnbr **list, char *nbr, char *str)
{
	t_listnbr	*l_nbr;

	l_nbr = malloc(sizeof(t_listnbr));
	l_nbr->nbr = nbr;
	l_nbr->str = str;
	l_nbr->next = *list;
	*list = l_nbr;
}

char	*ft_find_nbr(char *str, t_listnbr *list)
{
	while (list != NULL)
	{
		if (ft_strcmp(list->nbr, str) == 0)
			return (list->str);
		list = list->next;
	}
	return ("");
}
