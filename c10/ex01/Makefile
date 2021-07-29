# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ycornamu <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/26 23:13:42 by ycornamu          #+#    #+#              #
#    Updated: 2021/07/28 03:48:53 by ycornamu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat

SRCS = main.c ft_display.c ft_errors.c ft_strcmp.c
SRCS_DIR = srcs
OBJS_DIR = objs
HEADERS_DIR = includes

VPATH = $(OBJS_DIR)

_SRCS = $(addprefix $(SRCS_DIR)/, $(SRCS))
OBJS = $(patsubst %.c, %.o, $(SRCS))
_OBJS = $(addprefix  $(OBJS_DIR)/, $(OBJS))

CC = gcc
CFLAGS = -Wall -Wextra -Werror -I$(HEADERS_DIR)

all: $(NAME)

debug: CFLAGS += -fsanitize=address -g
debug: all

$(NAME) : $(_OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(_OBJS)

$(_OBJS): $(OBJS_DIR)/%.o : $(SRCS_DIR)/%.c $(OBJS_DIR)
	$(CC) -c $(CFLAGS) $< -o $@

$(OBJS_DIR):
	mkdir -p $@

clean:
	rm -rf $(_OBJS) $(OBJS_DIR)

fclean: clean
	rm -rf $(NAME)

re: fclean all
