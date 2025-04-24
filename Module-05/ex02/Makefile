# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/22 15:41:12 by mel-hamd          #+#    #+#              #
#    Updated: 2025/04/24 06:40:17 by mel-hamd         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

name	=  bureaucrat

CC  	= c++

CFLAGS	= -Wall -Wextra -Werror -std=c++98

headers	=  AForm.hpp Bureaucrat.hpp 

srcs	=  AForm.cpp Bureaucrat.cpp main.cpp

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