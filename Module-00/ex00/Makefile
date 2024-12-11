# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/11 10:46:19 by mel-hamd          #+#    #+#              #
#    Updated: 2024/12/11 10:57:09 by mel-hamd         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

name	=	megaphone
CC		=	c++
CFLAGS	=	-Werror -Wextra -Wall -std=c++98

srcs	=	megaphone.cpp
objs	=	$(srcs:.cpp=.o)

all		: $(name)

$(name)	: $(objs)
		$(CC) $(CFLAGS) $(objs) -o $(name)

%.o		: %.cpp
		$(CC) $(CFLAGS) -c $< -o $@

clean	:
		rm -rf $(objs)

fclean	: clean
		rm -rf $(name)

re		: fclean all

.PHONY	: clean