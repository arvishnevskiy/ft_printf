/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_digit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelisabe <kelisabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 19:35:29 by kelisabe          #+#    #+#             */
/*   Updated: 2022/01/07 20:40:10 by kelisabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		format_digit(int d)
{
	char *str_d;
	int res;

	str_d = ft_itoa(d);
	format_str(str_d);
	res = ft_strlen(str_d);
	free(str_d);
	return (res);
}

static int	mdl(int n)
{
	if (n < 0)
		return (n *(-1));
	return (n);
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

char	*ft_itoa(int n)
{
	char	*s;
	int		sign;
	int		len;

	sign = 0;
	if (n < 0)
		sign = 1;
	s = ft_calloc(11 + sign, sizeof(char));
	if (!s)
		return (NULL);
	if (n == 0)
		s[0] = '0';
	len = 0;
	while (n != 0)
	{
		s[len++] = '0' + mdl(n % 10);
		n /= 10;
	}
	if (sign)
		s[len] = '-';
	str_swap(s);
	return (s);
}
