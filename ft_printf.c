/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:57:01 by felperei          #+#    #+#             */
/*   Updated: 2023/10/31 10:35:52 by felperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int ft_printf(const char *input, ...)
{
	va_list args;
	va_start(args, input);
	unsigned int i;

	i = 0;
	while (*input)
	{
		if (*input == '%')
		{
			input++;
			if (ft_strchr("cspdiuxX", *input))
			{
				i += check_type_input(va_arg(args, void *);
			}
			else if (*input == '%')
			{
					i += print_char('%');
			}
		}
		else
			i += print_char('%');
			input++;
	}
	va_end(args);
	return (i);
}
