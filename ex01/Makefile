NAME = MegaPhone 
SRCS = MegaPhone.cpp

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
HEADERS = MegaPhone.hpp 

OBJS = $(SRCS:.cpp=.o)
all: $(NAME)
$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
clean:
	rm -f $(OBJS)
fclean:clean
	rm -f $(NAME)

re: fclean $(NAME)
.PHONY: all clean fclean re