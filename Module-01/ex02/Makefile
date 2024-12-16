# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/16 11:45:08 by mel-hamd          #+#    #+#              #
#    Updated: 2024/12/16 11:49:09 by mel-hamd         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

name	=	brain
CC		=	c++
CFLAGS 	= -Wall -Wextra -Werror -std=c++98

srcs	= main.cpp
objs	= $(srcs:.cpp=.o)

all : $(name)


$(name) : $(objs)
		$(CC) $(CFLAGS) $(objs) -o $(name)

%.o		: %.cpp 
		$(CC) $(CFLAGS) -c $< -o $@

clean	:
		rm -rf $(objs)

fclean : clean
		rm -rf $(name)

re		: fclean all

.PHONY	: clean
		