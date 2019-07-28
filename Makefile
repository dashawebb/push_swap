NAME = checker
SRC = main.c
OBJ   = $(SRC:.c=.o)
LIB_DIR  = libft/
LIBFT   = -L./libft -lft
LIB_INCS  = -I libft/includes
FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(LIBFT) $(OBJ)
	gcc $(FLAGS) -g -o $(NAME) $(OBJ) $(LIBFT) $(LIB_INCS)

$(LIBFT):
	make -C $(LIB_DIR)

%.o: %.c
	gcc $(FLAGS) $(LIB_INCS) -c $^ -o $@

clean:
	make -C libft/ clean
	rm -f $(OBJ)

fclean: clean
	make -C libft/ fclean
	rm -f $(NAME)

re: fclean all