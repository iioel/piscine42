#ifndef BACKTRACK_H
# define BACKTRACK_H

int	backtrack(int **tab, int size_tab);
int	reject(int **tab, int size_tab);
int	accept(int **tab, int size_tab);
int	check_line(int **tab, int size_tab, int x);
int	check_spectator(int **tab, int size_tab, int x);

#endif
