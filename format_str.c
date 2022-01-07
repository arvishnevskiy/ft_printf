/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelisabe <kelisabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 19:20:43 by kelisabe          #+#    #+#             */
/*   Updated: 2022/01/07 19:33:25 by kelisabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		format_str(const char *str)
{
	int res;

	res = 0;
	if (!str)
	{
		write(1, "(null)", 6);
		res = res + 6;
	}
	else
	{
		res = ft_strlen(str);
		write(1, str, res);
	}
	return (res);
}
