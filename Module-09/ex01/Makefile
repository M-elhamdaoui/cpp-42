# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mel-hamd <mel-hamd@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/10 06:14:13 by mel-hamd          #+#    #+#              #
#    Updated: 2025/05/12 06:44:17 by mel-hamd         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

name	= RPN
CC		= c++ 
CFLAGS	= -Wall -Wextra -Werror -std=c++98

HEADERS	= 

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