#include <iostream>
#include <locale>

int	ft_strlen(char *str)
{
	int len = 0;
	for (int i = 0; str[i]; i++) len ++;
	return (len);
}

int main(int argc, char **argv) {

	std::locale loc;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else {
		for (int i = 1; i < argc; i++) {
			for (int j = 0; j < ft_strlen(argv[i]); j++) {
				std::cout << std::toupper(argv[i][j], loc);
			}
		}
		std::cout << std::endl;
	}
	return (0);
}
