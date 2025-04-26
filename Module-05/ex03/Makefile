# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/22 15:41:12 by mel-hamd          #+#    #+#              #
#    Updated: 2025/04/26 09:29:39 by mel-hamd         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

name	=  intern

CC  	= c++

CFLAGS	= -Wall -Wextra -Werror -std=c++98

headers	=  Intern.hpp AForm.hpp Bureaucrat.hpp  ShrubberyCreationForm.hpp PresidentialPardonForm.hpp RobotomyRequestForm.hpp 

srcs	=  Intern.cpp AForm.cpp Bureaucrat.cpp main.cpp ShrubberyCreationForm.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp 

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