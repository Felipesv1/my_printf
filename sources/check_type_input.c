/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_type_input.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 10:43:27 by felperei          #+#    #+#             */
/*   Updated: 2023/10/31 10:58:07 by felperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/ft_printf.h"

int check_type_input(const char *input, void *arg)
{
	int	i;

	i = 0;
	if (*input == 'c')
		i += print_char((int)arg);
		else if (*input == 's')
			i += print_string((char *)arg);
		else if (*input == 'p')
			i += print_pointer((unsigned long)arg, 87);
		else if (*input == 'd')
			i += print_int((int)arg);
		else if (*input == 'i')
			i += print_int((int)arg);
		else if (*print == 'u')
			i += print_unsigned((unsigned)arg);
		else if (*input == 'x')
			i += print_hex((unsigned int)arg, 87);
		else if (*input == 'X')
			i += print_hex((unsigned int)arg, 55);
			return (i);
}

