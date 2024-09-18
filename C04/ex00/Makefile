SRC = main.cpp Animal.cpp Dog.cpp cat.cpp WrongCat.cpp WrongAnimal.cpp
CFLAGS = -Wall -Wextra -Werror 
CC = c++
NAME = Poly
OBJS = ${SRC:.cpp=.o}
RM = rm -f 

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp Animal.hpp WrongAnimal.hpp WrongCat.hpp Dog.hpp Cat.hpp
	$(CC) $(CFLAGS) -c $< -o $@

clean : 
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(OBJS) $(NAME)