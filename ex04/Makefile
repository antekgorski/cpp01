# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agorski <agorski@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/16 12:08:29 by agorski           #+#    #+#              #
#    Updated: 2025/04/16 19:18:25 by agorski          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = SedIsForLosers
SRC = main.cpp
CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME):
			$(CPP) $(CPPFLAGS) $(SRC) -o $(NAME)

clean:
			rm -f $(NAME)

re: clean all
.phony: all clean re