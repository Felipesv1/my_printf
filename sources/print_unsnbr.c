/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:55:30 by felperei          #+#    #+#             */
/*   Updated: 2023/11/01 13:58:54 by felperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_unsnbr(unsigned int n)
{
	static unsigned int count;
	unsigned int sign;

	sign = 0;
	count = 0;

	if (n >= 10)
		print_unsnbr(n / 10);
	count += print_char((n % 10) + '0');
	return (count + sign);
}
