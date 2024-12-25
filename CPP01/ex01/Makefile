SRC = main.cpp zombie.cpp 
OBJS = $(SRC:.cpp=.o)
CFLAGS = -Wall -Wextra -Werror -std=c++98 
CC = c++
NAME = brainz 

all : $(NAME)

$(NAME): $(OBJS) 
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp zombie.hpp
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -f $(OBJS)

re : clean all


fclean : clean
	rm -f $(NAME)