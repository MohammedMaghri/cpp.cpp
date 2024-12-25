
SRC = tests.cpp Account.cpp
OBJS = $(SRC:.cpp=.o)
RM = rm -rf 
CC = c++
NAME = missing 
CFLAGS = -std=c++98 -Wall -Wextra -Werror
all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

%.c : %.o  Account.hpp
	$(CC) $(CFLAGS) -c $< -o $@ 

fclean :
	 $(RM) $(OBJS) $(NAME)
clean:
	@$(RM) $(OBJS)
PHONY: all clean fclean 