# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bianca <bianca@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/25 19:50:58 by bmuni             #+#    #+#              #
#    Updated: 2023/03/27 21:42:50 by bianca           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=UnnecessaryViolence

all: $(NAME)

$(NAME):
	c++ -Wall -Wextra -Werror -std=c++98 main.cpp Weapon.cpp HumanA.cpp HumanB.cpp -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: clean $(NAME)

.PHONY: all, clean, fclean, re
