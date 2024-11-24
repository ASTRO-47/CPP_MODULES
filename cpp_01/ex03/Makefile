
FLAGS = -Wall -Wextra -Werror

CC = c++ -std=c++98

SOURCES =  main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
OBJECTS = $(SOURCES:.cpp=.o)
HEADERS = HumanA.hpp HumanB.hpp Weapon.hpp
NAME = weapon
RM = rm -f

#Colors:
GREEN		=	\e[92;5;118m
YELLOW		=	\e[93;5;226m
GRAY		=	\e[33;2;37m
RESET		=	\e[0m
CURSIVE		=	\e[33;3m

%.o:%.cpp $(HREADERS)
	@$(CC) $(FLAGS) -c $< -o $@

all : $(NAME)

$(NAME): $(OBJECTS)
	@printf "$(CURSIVE)$(GRAY) 	- Compiling $(NAME)... $(RESET)\n"
	@$(CC) $(FLAGS) $(SOURCES) -o $(NAME)
	@printf "$(GREEN)    - Executable ready.\n$(RESET)"

clean:
	@$(RM) $(OBJECTS)
	@printf "$(YELLOW)    - objects removed.$(RESET)\n"
fclean: clean
	@$(RM) $(NAME)
	@printf "$(YELLOW)    - Executable removed.$(RESET)\n"

re : fclean all

.PHONY: clean