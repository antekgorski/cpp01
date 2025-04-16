# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agorski <agorski@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/14 11:40:47 by agorski           #+#    #+#              #
#    Updated: 2025/04/14 12:37:10 by agorski          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombiehorde
SRC = main.cpp Zombie.cpp zombieHorde.cpp
CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME):
			$(CPP) $(CPPFLAGS) $(SRC) -o $(NAME)

clean:
			rm -f $(NAME)

re: clean all
.phony: all clean re