# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/30 02:34:13 by mel-hamd          #+#    #+#              #
#    Updated: 2024/12/30 02:41:12 by mel-hamd         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

name	= BSP
CC		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98

headers	= Fixed.hpp

srcs 	= main.cpp Fixed.cpp

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