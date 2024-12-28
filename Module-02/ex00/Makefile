# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/25 08:27:56 by mel-hamd          #+#    #+#              #
#    Updated: 2024/12/28 15:26:19 by mel-hamd         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

name	= fixed
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