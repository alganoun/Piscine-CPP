# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alganoun <alganoun@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/15 10:24:04 by alganoun          #+#    #+#              #
#    Updated: 2021/03/15 15:35:46 by alganoun         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CC = clang++

FLAGS = -Wall -Wextra -Werror -std=c++98 -o

SRCS  = ./megaphone.cpp


all : $(NAME)

$(NAME)	:	$(SRCS)
			$(CC) $(FLAGS) $(NAME) $(SRCS)

clean	:
			rm $(NAME)

re		:	clean all

.PHONY :	 all clean re
