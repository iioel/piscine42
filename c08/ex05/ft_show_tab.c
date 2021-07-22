#include "ft_stock_str.h"
#include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);

void	ft_show_tab(struct s_stock_str	*par)
{
	int	i;

	i = 0;
	while (par[i].str)
	{
		ft_putstr(par[i].str);
		ft_putstr("\n");
		ft_putnbr(par[i].size);
		ft_putstr("\n");
		ft_putstr(par[i].copy);
		ft_putstr("\n");
		i++;
	}
}

void	ft_putnbr(int nb)
{
	unsigned int	u_nb;

	if (nb < 0)
	{
		ft_putchar('-');
		u_nb = (unsigned int)(nb * -1);
	}
	else
		u_nb = nb;
	if (u_nb >= 10)
	{
		ft_putnbr(u_nb / 10);
		ft_putnbr(u_nb % 10);
	}
	else
	{
		ft_putchar(u_nb + '0');
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*(str++));
}

// // TO DELETE
// struct s_stock_str *ft_strs_to_tab(int ac, char **av);
// 
// int main(int ac, char **av)
// {
// 	t_stock_str *t;
// 
// 	t = ft_strs_to_tab(ac - 1, av + 1);
// 	ft_show_tab(t);
// }
