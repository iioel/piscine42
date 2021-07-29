# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: trossel <marvin@42lausanne.ch>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/26 11:38:44 by trossel           #+#    #+#              #
#    Updated: 2021/07/27 09:39:54 by trossel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = bsq

INCLUDES_DIR = includes

SRCS_DIR = srcs
_SRCS = main.c \
		solve.c \
		draw.c \
		ft.c \
		ft_strtools.c \
		read_file.c \
		free_map.c \
		ft_putmap.c
SRCS = $(addprefix $(SRCS_DIR)/, $(_SRCS))

_OBJS= $(patsubst %.c,%.o,$(_SRCS))
OBJS = $(addprefix $(SRCS_DIR)/, $(_OBJS))

CFLAGS = -Wall -Wextra -Werror -I$(INCLUDES_DIR)

vpath %.c $(SRCS_DIR)
vpath %.o $(SRCS_DIR)

.PHONY : all clean fclean re objects

all: $(NAME)

clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)

re: fclean all

%.o: %.c
	$(CC) -c -o $@ $^ $(CFLAGS)

$(NAME): $(OBJS)
	$(CC) -o $@ $^ $(CFLAGS)
