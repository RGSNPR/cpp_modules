NAME = OrthClass

FLAGS = -Wall -Werror -Wextra -O3

SRCS = main.cpp Fixed.cpp
OBJ = $(SRCS:.cpp=.o)

$(NAME): $(OBJ)
	clang++ $(FLAGS) -o $(NAME) $(SRCS)

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re