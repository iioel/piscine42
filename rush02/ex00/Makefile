# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ycornamu <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/23 10:33:15 by ycornamu          #+#    #+#              #
#    Updated: 2021/07/25 18:48:24 by ycornamu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := rush-02
SRCS := main.c ft_filetools.c ft_list.c ft_putstr.c ft_strcmp.c ft_strcount.c ft_strtools.c ft_strtools2.c ft_count.c ft_print.c
SRCS_DIR := srcs
OBJS := $(addprefix $(SRCS_DIR)/, $(patsubst %.c, %.o, $(SRCS)))

HEADERS_DIR = includes

CC = gcc
CFLAGS = -Wall -Wextra -Werror -I $(HEADERS_DIR)

.PHONY: all clean fclean re

all: ${NAME}

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS)

$(OBJS): %.o: %.c
	$(CC) -c $(CFLAGS) $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
