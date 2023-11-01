/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 11:00:23 by felperei          #+#    #+#             */
/*   Updated: 2023/10/31 15:21:29 by felperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int print_pointer(unsigned long value, int asc)
{
	char *ptr = (char *)value;
	if (asc)
	{
		while (*ptr)
		{
			print_char(*ptr);
			ptr++;
		}
	}
}
