/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelisabe <kelisabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 17:00:24 by kelisabe          #+#    #+#             */
/*   Updated: 2022/01/07 19:30:25 by kelisabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	printf_parsing(const char *format, va_list args)
{
	int i;
	(void)args;
	int res;

	res = 0;
	i = 0;
	while (format[i])
	{
		if(format[i] == '%')
		{
			++i;
			if (format[i] == ' ')
				++i;
			res += type_pars(format[i], args);
		}
		else
			res += format_char(format[i]);
		i++;
	}
	return (res);
}

int		ft_printf(const char *format, ...)
{
	va_list	args;
	int res;

	res = 0;
	va_start(args, format);
	res = printf_parsing(format, args);
	va_end(args);
	return (res);
}
