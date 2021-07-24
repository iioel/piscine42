# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ycornamu <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/23 10:33:15 by ycornamu          #+#    #+#              #
#    Updated: 2021/07/24 13:45:32 by ycornamu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a
SRCS_DIR := srcs
OBJS := $(addprefix $(SRCS_DIR)/,ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o)

HEADERS_DIR = includes

CC = gcc
CFLAGS = -Wall -Wextra -Werror -I $(HEADERS_DIR)

.PHONY: all clean fclean re

all: ${NAME}

${NAME}: $(OBJS)
	ar rcs $(NAME) $(OBJS)

$(OBJS): %.o: %.c
	$(CC) -c $(CFLAGS) $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
