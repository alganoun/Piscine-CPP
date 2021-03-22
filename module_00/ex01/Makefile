# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alganoun <alganoun@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/22 06:54:31 by alganoun          #+#    #+#              #
#    Updated: 2021/03/22 14:23:53 by alganoun         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME	=	phonebook

CC		=	clang++

FLAGS	=	-Wall -Wextra -Werror -std=c++98 -o

INC		=	./phonebook.hpp

SRCS	=	./phonebook.cpp ./phonebook_utils.cpp main.cpp


all		:	$(NAME)

$(NAME)	:	$(SRCS) $(INC)
			$(CC) $(FLAGS) $(NAME) $(SRCS)

clean	:
			rm $(NAME)

fclean	:	clean

re		:	clean all

.PHONY	:	all clean re
