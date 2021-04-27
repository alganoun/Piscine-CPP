# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: allanganoun <allanganoun@student.42lyon    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/27 00:32:26 by allanganoun       #+#    #+#              #
#    Updated: 2021/04/27 00:32:34 by allanganoun      ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME 	=	Array

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