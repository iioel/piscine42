# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ycornamu <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/26 23:13:42 by ycornamu          #+#    #+#              #
#    Updated: 2021/07/26 23:33:49 by ycornamu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRCS = 
SRCS_DIR = srcs
HEADERS_DIR = includes

_SRCS = $(addprefix $(SRCS_DIR), $(SRCS))
_OBJS = $(patsubst %.c, %.o, $(_SRCS))

CC = gcc
CFLAGS = -Wall -Wextra -Werror -I$(HEADERS)

all: $(NAME)

$(NAME) : $(_OBJS)
	$(CC) -o $(NAME) $(_OBJS)

$(OBJS): %.o: %.c
	$(CC) -c $(CFLAGS) $< -o $@

clean:
	rm -rf $(_OBJS)

fclean:
	rm -rf $(NAME)

re: fclean all
