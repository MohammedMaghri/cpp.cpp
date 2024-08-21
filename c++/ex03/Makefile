SRC = main.cpp weapon.cpp HumanA.cpp
OBJS = $(SRC:.c=.o)
CFLAGS = -Wall -Wextra -Werror
CC = c++
NAME = violence

all = $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -rf $(NAME)

fclean : clean