NAME = Moar_Brainz

SRC = main.cpp Zombie.cpp ZombieHorde.cpp
OBJ = $(SRC:.cpp=.o)
FLAGS = -std=c++98 -Wall -Werror -Wextra -I.

all: $(NAME)

$(NAME): $(OBJ)
	clang++ -O3 $(FLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
