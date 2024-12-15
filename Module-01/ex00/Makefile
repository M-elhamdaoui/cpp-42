# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/15 14:57:54 by mel-hamd          #+#    #+#              #
#    Updated: 2024/12/15 15:10:34 by mel-hamd         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

name	=	
CC		=	c++
CFLAGS	=	-Werror -Wextra -Wall -std=c++98

headers	=	

srcs	=	main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

objs	=	$(srcs:.cpp=.o)

all		:	$(name)

$(name)	:	$(objs) $(headers)
		$(CC) $(CFLAGS) $(objs) -o $(name)

%.o		:	%.cpp $(headers)
		$(CC) $(CFLAGS) -c $< -o $@

clean 	:
		rm -rf $(objs)

fclean	: clean
		rm -rf $(name)

re		: fclean all

.PHONY	: clean