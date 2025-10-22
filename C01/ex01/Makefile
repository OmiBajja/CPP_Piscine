# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: obajja <obajja@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/10 14:18:18 by obajja            #+#    #+#              #
#    Updated: 2025/10/10 14:18:19 by obajja           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ifneq ($(filter clean fclean, $(MAKECMDGOALS)),)
$(info Cleaning BrainzHorde 🚮)
else
$(info Compiling BrainzHorde 🎮)
endif

NAME = Zombie
CC = c++
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -std=c++98
INCLUDES = -I.
HEADER_FILES = Zombie.hpp
SRC = Zombie.cpp zombieHorde.cpp main.cpp

all: $(NAME)

$(NAME): $(SRC) $(HEADER_FILES)
	$(CC) $(CFLAGS) $(INCLUDES) $(SRC) -o $(NAME)

clean:
	$(RM) $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re