#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string newName) {
	name = newName;
}

void HumanB::attack() {
	if (weapon)
		std::cout << name + " attacks with his " + weapon->getType() << std::endl;
	else
		std::cout << name + " can't attack only with his fists" << std::endl;
	return ;
}

void HumanB::setWeapon(Weapon& weapon) {
	this->weapon = &weapon;

	return ;
}

HumanB::~HumanB() {

}
