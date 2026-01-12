# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: obajja <obajja@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/11 15:16:48 by obajja            #+#    #+#              #
#    Updated: 2026/01/06 12:07:43 by obajja           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ifneq ($(filter clean fclean, $(MAKECMDGOALS)),)
$(info Cleaning Converter 🚮)
else
$(info Compiling Converter 🎮)
endif

NAME = Serializer
CC = c++
RM = rm -rf
CFLAGS = -Wall -Wextra -Werror -std=c++98
OBJ_DIR	= obj/
OBJS = $(addprefix $(OBJ_DIR), $(notdir $(SRC:.cpp=.o)))
INCLUDES = -I.
HEADER_FILES = Base.hpp A.hpp B.hpp C.hpp
SRC = main.cpp

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