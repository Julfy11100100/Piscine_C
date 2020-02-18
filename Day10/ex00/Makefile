#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmark <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/11 17:06:46 by mmark             #+#    #+#              #
#    Updated: 2019/02/11 19:34:40 by mmark            ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a

SRC = ./srcs/

INC = ./includes/

create:
	gcc -Wall -Werror -Wextra -I$(INC) -c $(SRC)ft_putchar.c $(SRC)ft_swap.c $(SRC)ft_putstr.c $(SRC)ft_strlen.c $(SRC)ft_strcmp.c

lib:
	ar rc $(NAME) *.o

ran:
	ranlib $(NAME)

create_lib: lib ran

all: create create_lib

clean:
	rm -f ./*.o

fclean: clean
	rm -f $(NAME)
re: fclean all