# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: felperei <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/01 14:16:01 by felperei          #+#    #+#              #
#    Updated: 2023/11/01 14:28:46 by felperei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Werror -Wextra 

all : ${NAME}

SOURCES = ft_printf.c sources/print_char.c sources/print_hex.c \
sources/print_char.c sources/print_unsnbr.c source/print_string.c \
sources/check_type_input.c 


