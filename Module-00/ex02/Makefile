# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/13 11:39:15 by mel-hamd          #+#    #+#              #
#    Updated: 2024/12/14 11:16:18 by mel-hamd         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

name	=	Account

CC		=	c++

CFLAGS	= 	-Werror -Wextra -Wall -std=c++98

headers	= Account.hpp

srcs	= Account.cpp tests.cpp

objs	= $(srcs:.cpp=.o)

all		: $(name)

$(name)	: $(objs)
		$(CC) $(CFLAGS) $(objs) -o $(name)

%.o	 : %.cpp $(headers)
		$(CC) $(CFLAGS) -c $< -o $@

clean	:
		rm -rf $(objs)

fclean	: clean
		rm -rf $(name)

re		: fclean all

.PHONY	: clean