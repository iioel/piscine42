#ifndef TAB_TOOLS_H
# define TAB_TOOLS_H
# include "tab_tools2.h"

int		**ft_create_tab(int size);
int		**ft_find_init_numbers(int **tab, int size_tab);
int		**ft_copy_tab(int **tab, int **out_tab, int size_tab);
int		**ft_rot_tab_90(int **tab, int size_tab);
void	ft_free_tab(int **tab, int size_tab);

#endif
