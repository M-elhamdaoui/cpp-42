name	= convert

CC		= c++ 

CFLAGS	= -Wall -Wextra -Werror -std=c++98

HEADERS	= ScalarConverter.hpp

srcs	= main.cpp ScalarConverter.cpp

objs	= $(srcs:.cpp=.o)

all = $(name)


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