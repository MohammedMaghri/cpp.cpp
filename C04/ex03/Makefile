SRC = main.cpp matrais.cpp
OBJS = ${SRC:.cpp=.o}
CC = c++
CFLAGS = 
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