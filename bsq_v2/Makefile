# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: trossel <marvin@42lausanne.ch>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/26 11:38:44 by trossel           #+#    #+#              #
#    Updated: 2021/07/28 18:28:03 by trossel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = bsq

INCLUDES_DIR = includes

SRCS_DIR = srcs
_SRCS = main.c \
		ft.c \
		ft_strtools.c \
		parser.c \
		solve.c \
		draw.c \
		read_file.c
SRCS = $(addprefix $(SRCS_DIR)/, $(_SRCS))

_OBJS= $(patsubst %.c,%.o,$(_SRCS))
OBJS = $(addprefix $(SRCS_DIR)/, $(_OBJS))

CFLAGS = -Wall -Wextra -Werror -I$(INCLUDES_DIR)

.PHONY : all clean fclean re

all: $(NAME)

#debug: CFLAGS += -fsanitize=address,undefined -g
debug: CFLAGS += -g
debug: all

clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)

re: fclean all

%.o: %.c
	$(CC) -c -o $@ $^ $(CFLAGS)

$(NAME): $(OBJS)
	$(CC) -o $@ $^ $(CFLAGS)
