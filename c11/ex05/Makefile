# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ycornamu <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/26 23:13:42 by ycornamu          #+#    #+#              #
#    Updated: 2021/07/28 11:03:44 by ycornamu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

SRCS = main.c ft_ops.c ft_strtools.c
SRCS_DIR = .
OBJS_DIR = objs
HEADERS_DIR = .

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
