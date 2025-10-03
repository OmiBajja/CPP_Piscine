ifneq ($(filter clean fclean, $(MAKECMDGOALS)),)
$(info Cleaning megaphone 🚮)
else
$(info Compiling megaphone 🎮)
endif

NAME = megaphone
CC = c++
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = megaphone.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	$(RM) $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re