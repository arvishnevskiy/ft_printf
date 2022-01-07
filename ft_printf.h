/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelisabe <kelisabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 17:00:42 by kelisabe          #+#    #+#             */
/*   Updated: 2022/01/07 21:18:16 by kelisabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

int		format_char(const char c);
int		ft_printf(const char *format, ...);
int		type_pars(char format, va_list args);
int		format_str(const char *str);
size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s1);
int		format_digit(int d);
void	*ft_calloc(size_t count, size_t size);
char	*ft_itoa(int n);
char	*ft_itoa_uns_int(unsigned int n);
int		format_uns_int(unsigned int n);
char	*ft_itoa_hex(unsigned long n);
int		format_hex(unsigned int x);
int		format_big_hex(unsigned int X);
char	*ft_itoa_big_hex(unsigned int n);
int		format_point(unsigned long p);

#endif
