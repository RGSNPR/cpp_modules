#include "Zombie.hpp"

Zombie::Zombie() {
	name = "";
}

Zombie::Zombie(std::string newName) {
	name = newName;
}

Zombie::~Zombie() {
	std::cout << name + " I'm finally, actually dead!" << std::endl;
}

void Zombie::setName(std::string newName) {
	name = newName;
	return ;
}

void Zombie::announce() {
	std::cout << name + " BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}
