# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: allanganoun <allanganoun@student.42lyon    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/22 18:51:46 by allanganoun       #+#    #+#              #
#    Updated: 2021/04/22 18:52:44 by allanganoun      ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME 	=	identify

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
