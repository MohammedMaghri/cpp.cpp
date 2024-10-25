SRC = main.cpp BitcoinExchange.cpp 
OBJS = $(SRC:.cpp=.o)
CC =  c++
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
NAME = btc

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp BitcoinExchange.hpp
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	$(RM) $(OBJS)

fclean : clean 
	$(RM) $(NAME)

re : fclean all 