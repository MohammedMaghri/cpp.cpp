SRC = main.cpp Fixed.cpp
OBJS = $(SRC:.cpp=.o)
CC = c++
CFLAGS = -std=c++98 -Wall -Wextra -Werror
NAME = fixed
RM = rm -f

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp Fixed.hpp
	$(CC)  $(CFLAGS)  -c $< -o $@

clean :
	 $(RM) $(OBJS)

fclean : clean
	rm -f $(NAME)
 
re : clean all