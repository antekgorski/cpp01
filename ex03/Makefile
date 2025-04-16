# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agorski <agorski@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/14 14:11:05 by agorski           #+#    #+#              #
#    Updated: 2025/04/16 11:36:55 by agorski          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = violence
SRC = HumanA.cpp HumanB.cpp main.cpp Weapon.cpp
CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME):
			$(CPP) $(CPPFLAGS) $(SRC) -o $(NAME)

clean:
			rm -f $(NAME)

re: clean all
.phony: all clean re