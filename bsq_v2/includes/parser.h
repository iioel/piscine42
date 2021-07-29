#ifndef PARSER_H
# define PARSER_H

# include "def.h"

int		increase_heatmap_size(t_parser *p);
void	update_best_square(t_parser *p);
int		init_parser(t_parser *p);
void	free_parser(t_parser *p);

#endif
