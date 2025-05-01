# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/01 08:07:21 by mel-hamd          #+#    #+#              #
#    Updated: 2025/05/01 08:07:50 by mel-hamd         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

name	= templates
CC		= c++ 
CFLAGS	= -Wall -Wextra -Werror -std=c++98

HEADERS	= whatever.hpp

srcs	= main.cpp 

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