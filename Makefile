# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: felperei <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/01 14:16:01 by felperei          #+#    #+#              #
#    Updated: 2023/11/06 13:20:18 by felperei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Werror -Wextra 

SOURCES = ft_printf.c sources/print_char.c sources/print_hex.c \
sources/print_char.c sources/print_unsnbr.c sources/print_string.c \
sources/check_type_input.c sources/print_int.c sources/ft_strchr.c

OBJS = $(SOURCES:.c=.o)

all:$(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean:
	rm -rf $(NAME)

re: fclean all

.PHONY: all fclean clean re

