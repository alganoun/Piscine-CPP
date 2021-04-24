# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: allanganoun <allanganoun@student.42lyon    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/22 18:51:46 by allanganoun       #+#    #+#              #
#    Updated: 2021/04/24 03:38:00 by allanganoun      ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME 	=	serial

CC		=	clang++

FLAGS	=	-Wall -Wextra -Werror -std=c++98 -o

SRCS	=	./main.cpp


all		:	$(NAME)

$(NAME)	:	$(SRCS)
			$(CC) $(FLAGS) $(NAME) $(SRCS)

clean	:
			rm $(NAME)

fclean	:	clean

re		:	clean all

.PHONY	:	all clean re
