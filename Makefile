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
MAKEFLAGS = --no-print-directory
SRC = ft_printf.c
NAME = libftprintf.a
OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	make -C libft
	ar -cvq $(NAME) $(OBJ) libft/*.o

clean :
	-rm $(OBJ)

fclean :
	-rm $(OBJ) $(NAME)

re : fclean all

.PHONY : clean fclean re all
