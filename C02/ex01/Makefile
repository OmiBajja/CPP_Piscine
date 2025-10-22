# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: obajja <obajja@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/15 15:23:40 by obajja            #+#    #+#              #
#    Updated: 2025/10/19 15:57:26 by obajja           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ifneq ($(filter clean fclean, $(MAKECMDGOALS)),)
$(info Cleaning Fixed 🚮)
else
$(info Compiling Fixed 🎮)
endif

NAME = Fixed
CC = c++
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -std=c++98
INCLUDES = -I.
HEADER_FILES = Fixed.hpp
SRC = Fixed.cpp main.cpp

all: $(NAME)

$(NAME): $(SRC) $(HEADER_FILES)
	$(CC) $(CFLAGS) $(INCLUDES) $(SRC) -o $(NAME)

clean:
	$(RM) $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re