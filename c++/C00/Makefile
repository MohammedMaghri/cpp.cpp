SRC = megaphone.cpp
CC  = c++ 
CFLAGS = -std=c++98
NAME = megaphone
OBJS = ${SRC:.cpp=.o}
RM = rm -rf

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

%.o : %.cpp $(SRC)
	$(CC) $(CFLAGS) $< -o $@

clean :
	$(RM) $(OBJS)
fclean :
	$(RM) $(NAME) $(OBJS)
re : fclean all