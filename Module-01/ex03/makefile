# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/16 12:37:38 by mel-hamd          #+#    #+#              #
#    Updated: 2024/12/16 14:14:02 by mel-hamd         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

name	= name
CC		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98

headers	= Weapon.hpp HumanA.hpp HumanB.hpp

srcs 	= main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

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