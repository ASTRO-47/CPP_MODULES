
FLAGS = -Wall -Wextra -Werror

CC = c++ -std=c++98

SOURCES =  main.cpp 

NAME = Brain
RM = rm -f

#Colors:
GREEN		=	\e[92;5;118m
YELLOW		=	\e[93;5;226m
GRAY		=	\e[33;2;37m
RESET		=	\e[0m
CURSIVE		=	\e[33;3m



all : $(NAME)

$(NAME): $(SOURCES)
	@printf "$(CURSIVE)$(GRAY) 	- Compiling $(NAME)... $(RESET)\n"
	@$(CC) $(FLAGS) $(SOURCES) -o $(NAME)
	@printf "$(GREEN)    - Executable ready.\n$(RESET)"

clean:
	@$(RM) $(NAME)
	@printf "$(YELLOW)    - objects removed.$(RESET)\n"

re : clean all

.PHONY: clean