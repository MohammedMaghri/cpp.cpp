SRC = main.cpp Zombie.cpp newZombie.cpp  randomChump.cpp
CC = c++
CFLAGS = -std=c++98 -Wall -Wextra -Werror 
RM = rm -rf 
NAME = zombie
OBJS = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS) 
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -f $(OBJS)
fclean : clean
	rm -f $(NAME)