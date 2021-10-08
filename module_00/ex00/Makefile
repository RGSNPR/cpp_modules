NAME = megaphone

SRC = megaphone.cpp
OBJ = $(SRC:.cpp=.o)
FLAGS = -Wall -Werror -Wextra -I.

all: $(NAME)

$(NAME): $(OBJ)
	clang++ $(FLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re


