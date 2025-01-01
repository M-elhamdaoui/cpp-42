# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/31 21:24:03 by mel-hamd          #+#    #+#              #
#    Updated: 2025/01/01 11:12:18 by mel-hamd         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

name	= claptrap

CC  	= c++;

CFLAGS	= -Werror -Wextra -Wall -std=c++98

headers	= ClapTrap.hpp

srcs	= main.cpp ClapTrap.cpp

objs	=  $(srcs:.cpp=.o)


all	: $(name)


$(name) : $(objs)
		$(CC) $(CFLAGS) $(objs) -o $(name)

%.o		: %.c $(headers)
		$(CC) $(CFLAGS) -c $< -o $@

clean :
		rm -rf $(objs)

fclean : clean
		rm -rf $(name)

re : fclean all

.PHONY : clean