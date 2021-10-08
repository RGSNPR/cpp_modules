#include <string>
#include <iostream>

int main(void) {
	std::string baseStr = "HI THIS IS BRAIN";
	std::string* stringPTR = &baseStr;
	std::string& stringREF = baseStr;

	std::cout << &baseStr << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl;

	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;
}
