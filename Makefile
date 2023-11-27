# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tsurma <tsurma@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/27 15:40:37 by tsurma            #+#    #+#              #
#    Updated: 2023/11/27 17:08:59 by tsurma           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Werror -Wextra
NAME = libftprintf.a

SRC = ft_printf.c\
	ft_printf_h.c

OBJ = $(SRC:.c=.o)

$(NAME) : $(OBJ)
	ar -cvq $(NAME) $^

fclean :
	-rm $(OBJ) $(NAME)

clean :
	-rm $(OBJ)

re : fclean all

.PHONY : clean fclean re all
