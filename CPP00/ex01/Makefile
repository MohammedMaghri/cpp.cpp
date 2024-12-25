SRC = Phonebook.cpp
CC = c++
CFLAGS = -std=c++98 -Wall -Wextra -Werror 
RM = rm -rf 
NAME = PhoneBook
OBJS = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME):$(OBJS) 
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)  	

%.o: %.cpp Phonebook.hpp
	$(CC) $(CFLAGS) -c $< -o $@

fclean:
	 @$(RM) $(NAME) $(OBJS)

clean:
	@$(RM) $(OBJS)
PHONY: all clean fclean