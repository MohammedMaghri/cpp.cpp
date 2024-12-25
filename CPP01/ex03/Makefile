SRC = main.cpp HumanA.cpp HumanB.cpp weapon.cpp
OBJS = $(SRC:.cpp=.o)
CFLAGS = -std=c++98 -Wall -Wextra -Werror
CC = c++
NAME = violence

all = $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp  HumanA.hpp HumanB.cpp weapon.hpp 
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -f $(OBJS)

re : clean all

fclean : clean
	rm -f $(NAME)
