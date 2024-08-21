SRC = main.cpp
OBJS = $(SRC:.cpp=.o)
CFLAGS = -g -fsanitize=address -Wall -Wextra -Werror
CC = c++
NAME = ezz

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp
	$(CC) $(CFLAGS)  -c $< -o $@

clean :
	rm  -rf $(OBJS)
