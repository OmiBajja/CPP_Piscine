ifneq ($(filter clean fclean, $(MAKECMDGOALS)),)
$(info Cleaning PhoneBook 🚮)
else
$(info Compiling PhoneBook 🎮)
endif

NAME = PhoneBook
CC = c++
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -std=c++98
INCLUDES = -I.
HEADER_FILES = Contact.class.hpp PhoneBook.class.hpp
SRC = Contact.class.cpp PhoneBook.class.cpp main.cpp

all: $(NAME)

$(NAME): $(SRC) $(HEADER_FILES)
	$(CC) $(CFLAGS) $(INCLUDES) $(SRC) -o $(NAME)

clean:
	$(RM) $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re