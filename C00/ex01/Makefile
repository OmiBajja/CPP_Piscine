# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: obajja <obajja@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/14 11:18:06 by obajja            #+#    #+#              #
#    Updated: 2025/10/14 11:33:46 by obajja           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ifneq ($(filter clean fclean, $(MAKECMDGOALS)),)
$(info Cleaning PhoneBook 🚮)
else
$(info Compiling PhoneBook 📖)
endif

NAME = PhoneBook
CC = c++
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -std=c++98
INCLUDES = -I.
HEADER_FILES = Contact.hpp PhoneBook.hpp
SRC = Contact.cpp PhoneBook.cpp main.cpp

all: $(NAME)

$(NAME): $(SRC) $(HEADER_FILES)
	$(CC) $(CFLAGS) $(INCLUDES) $(SRC) -o $(NAME)

clean:
	$(RM) $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re