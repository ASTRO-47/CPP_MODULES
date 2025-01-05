FLAGS = -Wall -Wextra -Werror 

CPPC = c++ -std=c++98


SOURCES =  main.cpp Ice.cpp Cure.cpp AMateria.cpp  Character.cpp MateriaSource.cpp garbage.cpp
OBJECTS = $(SOURCES:.cpp=.o)

NAME = materia
HEADERS = AMateria.hpp Icharacter.hpp Ice.hpp Cure.hpp Character.hpp IMateriaSource.hpp MateriaSource.hpp garbage.hpp
RM = rm -f

#Colors:
GREEN		=	\e[92;5;118m
YELLOW		=	\e[93;5;226m
GRAY		=	\e[33;2;37m
RESET		=	\e[0m
CURSIVE		=	\e[33;3m


%.o: %.cpp $(HEADERS)
	$(CPPC) $(FLAGS) -c $< -o $@

all : $(NAME)

$(NAME): $(OBJECTS)
	@printf "$(CURSIVE)$(GRAY) 	- Compiling $(NAME)... $(RESET)\n"
	@$(CPPC) $(FLAGS) $(OBJECTS) -o $(NAME)
	@printf "$(GREEN)    - Executable ready.\n$(RESET)"

clean:
	@$(RM) $(OBJECTS)
	@printf "$(YELLOW)    - objects removed.$(RESET)\n"
	
fclean: clean
	@$(RM) $(NAME)
	@printf "$(YELLOW)    - Executable removed.$(RESET)\n"

re : fclean all

.PHONY: clean
