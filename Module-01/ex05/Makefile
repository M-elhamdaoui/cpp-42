# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/23 10:48:37 by mel-hamd          #+#    #+#              #
#    Updated: 2024/12/23 11:05:31 by mel-hamd         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

name	= 
CC		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98

headers	= 

srcs 	= main.cpp 

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