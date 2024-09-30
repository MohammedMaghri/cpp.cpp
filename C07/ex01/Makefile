SRC = main.cpp
OBJS = ${SRC:.o=.cpp}
CFLAGS = -Wall -Wextra -Werror
NAME = Temp
CC = c++
RM = rm -f 

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
%.o : %.cpp 
	$(CC) $(CFLAGS) $< -o $@

clean : 

fclean : clean
	$(RM) $(NAME)

re : fclean all