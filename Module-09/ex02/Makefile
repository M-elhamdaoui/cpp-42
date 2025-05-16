# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mel-hamd <mel-hamd@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/10 06:14:16 by mel-hamd          #+#    #+#              #
#    Updated: 2025/05/15 14:14:41 by mel-hamd         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

name	= pmergeMe
CC		= c++ 
CFLAGS	= -Wall -Wextra -Werror -std=c++98

HEADERS	= PmergeMe.hpp

srcs	= main.cpp PmergeMe.cpp

objs	= $(srcs:.cpp=.o)

all : $(name)


$(name) : $(objs)
		$(CC) $(CFLAGS) $(objs)  -o $(name)

%.o : %.cpp $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@


clean :
	rm -rf $(objs)

fclean : clean
	rm -rf $(name)

re : fclean all

.PHONY : clean