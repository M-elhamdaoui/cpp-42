# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/16 10:47:36 by mel-hamd          #+#    #+#              #
#    Updated: 2024/12/16 11:01:54 by mel-hamd         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

name	=	zombies
CC		=	c++
CFLAGS	=	-Werror -Wextra -Wall -std=c++98

headers	=	Zombie.hpp

srcs	=	main.cpp Zombie.cpp zombieHorde.cpp

objs	=	$(srcs:.cpp=.o)

all		:	$(name)

$(name)	:	$(objs) 
		$(CC) $(CFLAGS) $(objs) -o $(name)

%.o		:	%.cpp $(headers)
		$(CC) $(CFLAGS) -c $< -o $@

clean 	:
		rm -rf $(objs)

fclean	: clean
		rm -rf $(name)

re		: fclean all

.PHONY	: clean