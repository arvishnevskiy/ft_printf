# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kelisabe <kelisabe@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/07 16:35:47 by kelisabe          #+#    #+#              #
#    Updated: 2022/01/07 21:16:39 by kelisabe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_printf.c format_char.c type_pars.c format_str.c ft_printf_subs.c format_digit.c \
			format_uns_int.c format_hex.c format_big_hex.c format_point.c

OBJCT = $(patsubst %.c, %.o, $(SRCS))

HEADER = ft_printf.h

FLAG = -Wall -Wextra -Werror -g

RM = rm -rf

all: $(NAME)

$(NAME): $(OBJCT)
	ar rcs $(NAME) $(OBJCT)

%.o: %.c $(HEADER) Makefile
	gcc $(FLAG) -c $< -o $@

clean:
	$(RM) $(OBJCT)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
