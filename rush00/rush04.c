#include "ft_putchar.h"
#include "rush04.h"

void	rush(int x, int y)
{
	struct s_Chars	chars;

	chars.top_l = 'A';
	chars.top_r = 'C';
	chars.btm_l = 'C';
	chars.btm_r = 'A';
	chars.side_updn = 'B';
	chars.side_lr = 'B';
	c_rev(&x, &y, &chars);
	r_engine(x, y, chars);
}

void	c_rev(int *x, int *y, struct s_Chars *chars)
{
	if (*x < 0)
	{
		*x *= -1;
		ft_swchar(&chars->top_l, &chars->top_r);
		ft_swchar(&chars->btm_l, &chars->btm_r);
	}
	if (*y < 0)
	{
		*y *= -1;
		ft_swchar(&chars->top_l, &chars->btm_l);
		ft_swchar(&chars->top_r, &chars->btm_r);
	}
}

void	r_engine(int x, int y, struct s_Chars chars)
{
	int	i_y;

	i_y = 0;
	while (i_y < y)
	{
		if (i_y == 0)
			ft_printline(x, chars.top_l, chars.side_updn, chars.top_r);
		else if (i_y == (y - 1))
			ft_printline(x, chars.btm_l, chars.side_updn, chars.btm_r);
		else
			ft_printline(x, chars.side_lr, ' ', chars.side_lr);
		i_y++;
	}
}

void	ft_printline(int x, char a, char b, char c)
{
	if (x > 0)
	{
		ft_putchar(a);
		ft_putnchar(b, x - 2);
		if (x > 1)
			ft_putchar(c);
		ft_putchar('\n');
	}
}

void	ft_swchar(char *c, char *d)
{
	char	t;

	t = *c;
	*c = *d;
	*d = t;
}
