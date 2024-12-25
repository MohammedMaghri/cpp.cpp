SRC = main.cpp harl.cpp
OBJS = $(SRC:.cpp=.o)
CC = c++
CFLAGS = -std=c++98 -Wall -Wextra -Werror
NAME = harlFilter

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp  harl.hpp 
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -f $(OBJS)

re : clean all

fclean : clean
	rm -f $(NAME)