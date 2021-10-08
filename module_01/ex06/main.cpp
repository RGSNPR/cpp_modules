#include "Karen.hpp"

int main(int argc, char **argv)
{
	if (argc != 2) {
		std::cout << "Wrong number of args" << std::endl;
		return (1);
	}
	std::string level(argv[1]);
	Karen krn;
	krn.complain(level);

	return (0);
}