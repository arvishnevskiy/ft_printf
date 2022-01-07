/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_uns_int.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelisabe <kelisabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 20:11:04 by kelisabe          #+#    #+#             */
/*   Updated: 2022/01/07 20:38:07 by kelisabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	format_uns_int(unsigned int n)
{
	char *str_n;
	int res;

	n += 4294967295 + 1;
	str_n = ft_itoa_uns_int(n);
	format_str(str_n);
	res = ft_strlen(str_n);
	free(str_n);
	return (res);
}

static int	mdl(unsigned int n)
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

char	*ft_itoa_uns_int(unsigned int n)
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
