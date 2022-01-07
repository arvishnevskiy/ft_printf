/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_point.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelisabe <kelisabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 21:12:20 by kelisabe          #+#    #+#             */
/*   Updated: 2022/01/07 21:15:42 by kelisabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		format_point(unsigned long p)
{
	char *str_p;
	int res;

	str_p = ft_itoa_hex(p);
	format_str("0x");
	format_str(str_p);
	res = ft_strlen(str_p);
	free(str_p);
	return (res + 2);
}
