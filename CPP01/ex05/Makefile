SRC = main.cpp harl.cpp
OBJS = $(SRC:.cpp=.o)
NAME = harl 
CC = c++
CFLAGS = -std=c++98 -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp  harl.hpp
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm  -f $(OBJS)

re : clean all


fclean : clean
	rm -f $(NAME)