# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iez-zagh <iez-zagh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/21 09:48:00 by iez-zagh          #+#    #+#              #
#    Updated: 2024/11/21 10:06:49 by iez-zagh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Wextra -Werror

CC = g++ -std=c++98

SOURCES =  megaphone.cpp

NAME = megaphone

RM = rm -rf

#Colors:
GREEN		=	\e[92;5;118m
YELLOW		=	\e[93;5;226m
GRAY		=	\e[33;2;37m
RESET		=	\e[0m
CURSIVE		=	\e[33;3m

all : $(NAME)

$(NAME):
	@printf "$(CURSIVE)$(GRAY) 	- Compiling $(NAME)... $(RESET)\n"
	@$(CC) $(FLAGS) $(SOURCES) -o $(NAME)
	@printf "$(GREEN)    - Executable ready.\n$(RESET)"

clean:
	@$(RM) $(NAME)
	@printf "$(YELLOW)    - Executable removed.$(RESET)\n"

fclean: clean
	@$(RM) $(NAME)
	@printf "$(YELLOW)    - Executable removed.$(RESET)\n"

re : fclean all

.PHONY: clean