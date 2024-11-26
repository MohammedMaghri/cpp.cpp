SRC = PmergeMe.cpp test.cpp
OBJS = ${SRC:.cpp=.o}
CC = c++
CFLAGS =  
NAME = PmergeMe
RM = rm -rf

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean : 
	$(RM) $(OBJS)

fclean : clean 
	$(RM) $(NAME)

re : clean all
