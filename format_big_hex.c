/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_big_hex.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelisabe <kelisabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 20:59:11 by kelisabe          #+#    #+#             */
/*   Updated: 2022/01/07 21:00:14 by kelisabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		format_big_hex(unsigned int X)
{
	char *str_X;
	int res;

	str_X = ft_itoa_big_hex(X);
	format_str(str_X);
	res = ft_strlen(str_X);
	free(str_X);
	return (res);
}

static void	str_swap(char *s)
{
	int		len;
	int		i;
	char	c;

	len = ft_strlen(s);
	i = -1;
	while (++i < len / 2)
	{
		c = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = c;
	}
}

char	*ft_itoa_big_hex(unsigned int n)
{
	char	*s;
	int		len;

	s = ft_calloc(12, sizeof(char));
	if (!s)
		return (NULL);
	if (n == 0)
		s[0] = '0';
	len = 0;
	while (n != 0)
	{
		if ((n % 16) <= 9)
			s[len++] = '0' + (n % 16);
		else
			s[len++] = (n % 16) + 'A' - 10;
		n /= 16;
	}
	str_swap(s);
	return (s);
}
