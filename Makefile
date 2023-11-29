# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tsurma <tsurma@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/27 15:40:37 by tsurma            #+#    #+#              #
#    Updated: 2023/11/29 17:40:03 by tsurma           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Werror -Wextra -g
NAME = libftprintf.a
MAKEFLAGS = --no-print-directory

SRC = ft_printf.c\
	ft_printf_h.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME) : $(OBJ)
	make -C libft
	ar -cvq $(NAME) $(OBJ) libft/*.o

fclean : clean
	-rm -f $(NAME)
	make fclean -C libft

clean :
	make clean -C libft
	-rm -f $(OBJ)

re : fclean all


.PHONY : clean fclean re all
