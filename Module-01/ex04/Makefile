# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/18 22:01:47 by mel-hamd          #+#    #+#              #
#    Updated: 2024/12/18 22:55:34 by mel-hamd         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

name	git = 
CC		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98

headers	= 

srcs 	= 

objs	= $(srcs:.cpp=.o)

all		: $(name)

$(name) : $(objs)
		$(CC) $(CFLAGS) $(objs) -o $(name)

%.o		: %.cpp $(headers)
		$(CC) $(CFLAGS) -c $< -o $@

clean	:
		rm -rf $(objs)	
	
fclean	: clean
		rm -rf $(name)

re		: fclean all

.PHONY	: clean