NAME = push_swap

CC = cc

FLAGS = -Wall -Wextra -Werror

SRC = src/main.c src/checks.c src/utils.c src/stack_utils.c \
	  src/sort.c src/sort_utils.c \
	  src/operations/push.c src/operations/rotate.c \
	  src/operations/reverse_rotate.c src/operations/swap.c \
	  src/cost.c src/climb.c src/split.c \

OBJ = $(SRC:.c=.o)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all