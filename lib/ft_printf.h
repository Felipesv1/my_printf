/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:21:05 by felperei          #+#    #+#             */
/*   Updated: 2023/11/01 14:15:33 by felperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

# include <stdarg.h>
# include "libft.h"

int	check_type_input(const char *input, void *arg);
int ft_printf(const char *input, ...);
int	print_char(char c);
int print_int(int n);
int	print_string(char *str);
int	print_pointer(unsigned long value, int asc);
int	print_hex(unsigned int value, int asc);
int	print_unsnbr(unsigned int nb);
#endif
