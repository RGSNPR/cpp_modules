#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(const std::string startName, Weapon& weapon) :
 		weapon(weapon) {

	name = startName;
}

const void HumanA::attack() {
	std::cout << name + " attacks with his " + weapon.getType() << std::endl;

	return ;
}

HumanA::~HumanA() {

}
