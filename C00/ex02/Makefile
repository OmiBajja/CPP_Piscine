ifneq ($(filter clean fclean, $(MAKECMDGOALS)),)
$(info Cleaning Bank Test 🚮)
else
$(info Compiling Bank Test 🎮)
endif

NAME = Bank
CC = c++
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -std=c++98
INCLUDES = -I.
HEADER_FILES = Account.hpp
SRC = Account.cpp tests.cpp

all: $(NAME)

$(NAME): $(SRC) $(HEADER_FILES)
	$(CC) $(CFLAGS) $(INCLUDES) $(SRC) -o $(NAME)

clean:
	$(RM) $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re