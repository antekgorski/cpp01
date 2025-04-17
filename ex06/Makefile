# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agorski <agorski@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/17 10:05:14 by agorski           #+#    #+#              #
#    Updated: 2025/04/17 19:40:33 by agorski          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harlFilter
SRC = main.cpp Harl.cpp
CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME):
			$(CPP) $(CPPFLAGS) $(SRC) -o $(NAME)

clean:
			rm -f $(NAME)

re: clean all
.phony: all clean re