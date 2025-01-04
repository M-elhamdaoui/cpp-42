# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/31 21:24:15 by mel-hamd          #+#    #+#              #
#    Updated: 2025/01/04 05:03:25 by mel-hamd         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

name	= diamondtrap

CC  	= c++

CFLAGS	= -Wall -Wextra -Werror -std=c++98

headers	= ClapTrap.hpp ScavTrap.hpp FragTrap.hpp DiamondTrap.hpp

srcs	= main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp

objs	=  $(srcs:.cpp=.o)


all	: $(name)


$(name) : $(objs)
		$(CC) $(CFLAGS) $(objs) -o $(name)

%.o	: %.cpp $(headers)
		$(CC) $(CFLAGS) -c $< -o $@

clean :
		rm -rf $(objs)

fclean : clean
		rm -rf $(name)

re : fclean all

.PHONY : clean