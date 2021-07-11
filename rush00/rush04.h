// Condition (preprocesseur) pour eviter de definir les
// prototypes de fonction a double (include dans main.c et rush04.c)
#ifndef RUSH04_H
# define RUSH04_H

struct	s_Chars {
	char	top_l;
	char	top_r;
	char	btm_l;
	char	btm_r;
	char	side_updn;
	char	side_lr;
};

void	rush(int x, int y);
void	c_rev(int *x, int *y, struct s_Chars *chars);
void	r_engine(int x, int y, struct s_Chars chars);
void	ft_printline(int x, char a, char b, char c);
void	ft_swchar(char *c, char *d);

#endif
