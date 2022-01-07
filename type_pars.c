/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_pars.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelisabe <kelisabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 17:10:53 by kelisabe          #+#    #+#             */
/*   Updated: 2022/01/07 21:17:01 by kelisabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		type_pars(char format, va_list args)
{
	int res;

	res = 0;
	if (format == 'd' || format == 'i')
		res = format_digit(va_arg(args, int));
	if (format == 'c')
		res = format_char(va_arg(args, int));
	else if (format == 's')
		res = format_str(va_arg(args, char *));
	else if (format == 'p')
		res = format_point(va_arg(args, unsigned long));
	else if (format == 'u')
		res = format_uns_int(va_arg(args, unsigned int));
	else if (format == 'x')
		res = format_hex(va_arg(args, unsigned int));
	else if (format == 'X')
		res = format_big_hex(va_arg(args, unsigned int));
	else if (format == '%')
		res = format_char('%');
	return (res);
}
