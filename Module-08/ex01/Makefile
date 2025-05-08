# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mel-hamd <mel-hamd@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/08 11:26:14 by mel-hamd          #+#    #+#              #
#    Updated: 2025/05/08 15:04:36 by mel-hamd         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

name	= span
CC		= c++ 
CFLAGS	= -Wall -Wextra -Werror -std=c++98

HEADERS	= Span.hpp

srcs	= main.cpp Span.cpp

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