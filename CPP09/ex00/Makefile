SRC = main.cpp
OBJS = ${SRC=.o:.cpp}
CFLAGS = -Wall -Wextra -Werror
NAME = Temp
CC = c++ -std=c++98
RM = rm -rf 

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

%.o : %.cpp temp.hpp
	$(CC) $(CFLAGS) $(SRC) -c $< -o $@

re : fclean all

clean : 
	$(RM) $(OBJS)
fclean : clean
	$(RM) $(NAME)