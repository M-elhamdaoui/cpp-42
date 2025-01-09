# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/09 09:03:28 by mel-hamd          #+#    #+#              #
#    Updated: 2025/01/09 14:56:43 by mel-hamd         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

name	= animals

CC  	= c++

CFLAGS	= -Wall -Wextra -Werror -std=c++98

headers	= Animal.hpp Cat.hpp Dog.hpp WrongCat.hpp WrongAnimal.hpp Brain.hpp

srcs	= main.cpp Animal.cpp Cat.cpp Dog.cpp  WrongCat.cpp WrongAnimal.cpp Brain.cpp

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