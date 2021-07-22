#!/bin/sh

gcc -c ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
ar r libft.a *.o
rm -rf *.o
ranlib libft.a
