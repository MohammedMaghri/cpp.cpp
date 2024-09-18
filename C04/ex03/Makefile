SRC = main.cpp AMateria.cpp Cure.cpp Character.cpp Ice.cpp MateriaSource.cpp  
OBJS = ${SRC:.cpp=.o}
CC = c++
CFLAGS = -Wall -Wextra -Werror #-g -fsanitize=address
RM = rm -f
NAME = matrais


all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean : 
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re: fclean all