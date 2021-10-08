#include "Karen.hpp"

Karen::Karen() {
	(Karen::funcPtrs[0]) = &Karen::debug;
	(Karen::funcPtrs[1]) = &Karen::info;
	(Karen::funcPtrs[2]) = &Karen::warning;
	(Karen::funcPtrs[3]) = &Karen::error;
}

Karen::~Karen() {}

void Karen::debug(void) {
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Karen::info(void) {
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void Karen::warning(void) {
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void Karen::error(void) {
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void Karen::complain(std::string level) {
	int i = 0;
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (; i < 4 && levels[i].compare(level) != 0; i++);
	switch (i)
	{
	case 0:
		(this->*funcPtrs[0])();
		break;
	case 1:
		(this->*funcPtrs[1])();
		break;
	case 2:
		(this->*funcPtrs[2])();
		break;
	case 3:
		(this->*funcPtrs[3])();
		break;
	default:
		std::cout << "Level unknown" << std::endl;
		break;
	}
}