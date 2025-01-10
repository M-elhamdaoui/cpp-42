# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/09 16:26:00 by mel-hamd          #+#    #+#              #
#    Updated: 2025/01/10 16:18:54 by mel-hamd         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

name	= recap

CC  	= c++

CFLAGS	= -Wall -Wextra -Werror -std=c++98

headers	= AMateria.hpp Cure.hpp Ice.hpp ICharacter.hpp Character.hpp

srcs	= main.cpp AMateria.cpp Ice.cpp Cure.cpp Character.cpp 

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