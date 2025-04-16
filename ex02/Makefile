# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agorski <agorski@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/14 13:14:39 by agorski           #+#    #+#              #
#    Updated: 2025/04/14 14:05:53 by agorski          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brain
SRC = main.cpp
CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

all:	$(NAME)

$(NAME):
			$(CPP) $(CPPFLAGS) $(SRC) -o $(NAME)

clean:
			rm -f $(NAME)

re: clean all
.phony: clean all re
