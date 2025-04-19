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