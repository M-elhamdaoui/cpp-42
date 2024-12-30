# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/30 02:34:13 by mel-hamd          #+#    #+#              #
#    Updated: 2024/12/30 04:03:52 by mel-hamd         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

name	= BSP
CC		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98

headers	= Fixed.hpp Point.hpp

srcs 	= main.cpp Fixed.cpp Point.cpp bsp.cpp

objs	= $(srcs:.cpp=.o)

all		: $(name) 

$(name) : $(objs)
		$(CC) $(CFLAGS) $(objs) -o $(name)

%.o		: %.cpp $(headers)
		$(CC) $(CFLAGS) -c $< -o $@

clean	:
		rm -rf $(objs)	
	
fclean	: clean
		rm -rf $(name)

re		: fclean all

.PHONY	: clean