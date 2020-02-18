#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmark <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/14 17:46:54 by mmark             #+#    #+#              #
#    Updated: 2019/02/14 18:05:46 by mmark            ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = ft_display_file

INC = header.h

MAIN = main.c

create:
	gcc -Wall -Werror -Wextra -I$(INC) -o$(NAME) $(MAIN)

all: create

clean:
	rm -f $(NAME)

fclean: clean