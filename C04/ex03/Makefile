# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: obajja <obajja@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/27 12:58:46 by obajja            #+#    #+#              #
#    Updated: 2025/10/30 14:23:36 by obajja           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ifneq ($(filter clean fclean, $(MAKECMDGOALS)),)
$(info Cleaning Materias 🚮)
else
$(info Compiling Materias 🎮)
endif

NAME = Materias
CC = c++
RM = rm -rf
CFLAGS = -Wall -Wextra -Werror -std=c++98
OBJ_DIR	= obj/
OBJS = $(addprefix $(OBJ_DIR), $(notdir $(SRC:.cpp=.o)))
INCLUDES = -I.
HEADER_FILES = AMateria.hpp Character.hpp Cure.hpp Ice.hpp ICharacter.hpp IMateriaSource.hpp MateriaSource.hpp
SRC = AMateria.cpp Character.cpp Cure.cpp Ice.cpp main.cpp MateriaSource.cpp

all: $(OBJ_DIR) $(NAME)

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(OBJ_DIR)%.o: %.cpp $(HEADER_FILES)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME) $(OBJ_DIR)

re: fclean all

.PHONY: all clean fclean re