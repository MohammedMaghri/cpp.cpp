SRC = main.cpp Animal.cpp Dog.cpp cat.cpp WrongCat.cpp WrongAnimal.cpp
CFLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
NAME = Poly
OBJS = ${SRC:.cpp=.o}
RM = rm -f 

all : $(NAME)
$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp Animal.hpp WrongAnimal.hpp WrongCat.hpp Dog.hpp Cat.hpp
	$(CC) $(CFLAGS) -c $< -o $@

clean : 
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(OBJS) $(NAME)
re : fclean all