NAME = PmergeMe

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -rf

SRC = main.cpp PmergeMe.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) -o $(NAME) $(OBJ)
	@echo "\033[32m[success]\033[0m $(NAME) compiled!"

%.o: %.cpp
	@$(CC) $(FLAGS) -c $< -o $@
	@echo "\033[36m[compiled]\033[0m $<"

clean:
	@$(RM) $(OBJ)
	@echo "\033[33m[clean]\033[0m object files removed!"

fclean: clean
	@$(RM) $(NAME)
	@echo "\033[31m[fclean]\033[0m $(NAME) file removed!"

re: fclean all