SRC = megaphone.cpp 
CC = c++
CFLAGS = -std=c++98 -Wall -Wextra -Werror 
RM = rm -rf 
NAME = megaphone
OBJS = $(SRC:.cpp=.o)

all : $(NAME)

$(NA9ME) : $(OBJS) 
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)  	

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

fclean:
	 @$(RM) $(NAME) $(OBJS)
clean:
	@$(RM) $(OBJS)
	
PHONY: all clean fclean 