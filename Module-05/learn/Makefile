# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/19 06:03:41 by mel-hamd          #+#    #+#              #
#    Updated: 2025/04/19 06:08:37 by mel-hamd         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

name	= learn

CC		= c++;

CFLAGS	=-Wall -Wextra -Werror -std=c++98

headers = Rectangle.hpp

srcs	= Rectangle.cpp

objs	= ${srcs:.cpp=.o}


all : ${name}

${name} : $(objs)
			${CC} ${CFLAGS} ${objs} -o ${name}

%.o : %.cpp ${headers}
			${CC} ${CFLAGS}  -c $< -o $@

clean :
		rm -rf ${objs}

fclean : clean
		rm -rf ${name}

re : fclean all

.PHONY : clean