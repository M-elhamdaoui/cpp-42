# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/11 11:11:19 by mel-hamd          #+#    #+#              #
#    Updated: 2024/12/11 19:41:20 by mel-hamd         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

name	=	phonebook
CC		=	c++
CFLAGS	=	-Werror -Wextra -Wall -std=c++98

headers	=	Contact.hpp PhoneBook.hpp

srcs	=	Contact.cpp PhoneBook.cpp main.cpp 

objs	=	$(srcs:.cpp=.o)

all		:	$(name)

$(name)	:	$(objs) $(headers)
		$(CC) $(CFLAGS) $(objs) -o $(name)

%.o		:	%.cpp $(headers)
		$(CC) $(CFLAGS) -c $< -o $@

clean 	:
		rm -rf $(objs)

fclean	: clean
		rm -rf $(name)

re		: fclean all

.PHONY	: clean