# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alganoun <alganoun@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/29 14:30:45 by alganoun          #+#    #+#              #
#    Updated: 2021/03/29 14:49:23 by alganoun         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME	=	replace

CC		=	clang++

FLAGS	=	-Wall -Wextra -Werror -std=c++98 -o

SRCS	=	./main.cpp


all		:	$(NAME)

$(NAME)	:	$(SRCS) $(INC)
			$(CC) $(FLAGS) $(NAME) $(SRCS)

clean	:
			rm -f *.replace

fclean	:	clean
			rm -f $(NAME)

re		:	clean all

.PHONY	:	all clean re
