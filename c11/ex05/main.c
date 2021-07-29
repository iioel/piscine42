#include "do-op.h"

int	main(int ac, char **av)
{
	int(*f)(int, int)	t_op[5];
	char				*ops;

	t_op[0] = &ft_op_add;
	t_op[1] = &ft_op_sub;
	t_op[2] = &ft_op_mul;
	t_op[3] = &ft_op_div;
	t_op[4] = &ft_op_mod;
	ops = "+-*/%";

	if (ac == 4)

}
