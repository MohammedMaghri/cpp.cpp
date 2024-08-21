SRC = main.cpp zombie.cpp 
OBJS = $(SRC:.c=.o)
CFLAGS = -Wall -Wextra -Werror 
CC = c++
NAME = brainz 

all = $(NAME)

$(NAME): $(OBJS) 
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -f $(NAME)

fclean : clean