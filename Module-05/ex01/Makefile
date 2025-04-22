# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/12 19:03:11 by mel-hamd          #+#    #+#              #
#    Updated: 2025/04/22 16:03:03 by mel-hamd         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


name	= bureaucrat

CC  	= c++

CFLAGS	= -Wall -Wextra -Werror -std=c++98

headers	= Bureaucrat.hpp

srcs	=  main.cpp Bureaucrat.cpp

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