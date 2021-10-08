#include "Zombie.hpp"

Zombie::Zombie(std::string newName) {
	name = newName;
}

Zombie::~Zombie() {
	std::cout << name + " I'm finally, actually dead!" << std::endl;
}

void Zombie::announce() {
	std::cout << name + " BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}
