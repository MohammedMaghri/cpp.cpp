SRC = main.cpp ClapTrap.cpp FragTrap.cpp 
OBJS = $(SRC:.cpp=.o)
NAME = ClapTrap
CC = c++
CFLAGS = -std=c++98 -Wall -Wextra -Werror
RM = -rm -f

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp ClapTrap.hpp FragTrap.hpp
	$(CC) $(CFLAGS) -c $< -o $@

clean : 
	$(RM) $(OBJS)

fclean : clean 
	$(RM) $(NAME)

re : fclean all