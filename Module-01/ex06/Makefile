# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/23 13:50:31 by mel-hamd          #+#    #+#              #
#    Updated: 2024/12/23 14:34:31 by mel-hamd         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

name	= harlFilter
CC		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98

headers	= Harl.hpp

srcs 	= main.cpp Harl.cpp

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