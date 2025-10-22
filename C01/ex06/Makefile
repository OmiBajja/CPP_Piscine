# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: obajja <obajja@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/10 14:17:02 by obajja            #+#    #+#              #
#    Updated: 2025/10/13 15:49:51 by obajja           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 			= harlFilter
CC	 			= c++
RM				= rm -f
FLAGS			= -Werror -Wextra -Wall -std=c++98
INCLUDES 		= -I.
SRCS 			= Harl.cpp main.cpp
HEADER_FILES	= Harl.hpp

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(CFLAGS) $(INCLUDES) $(SRCS) -o $(NAME)

clean:
	$(RM) $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re