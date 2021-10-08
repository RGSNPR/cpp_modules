#ifndef HUMANB_HPP
#define HUMANB_HPP


#include <string>
#include "Weapon.hpp"

class HumanB {
	private:
		Weapon* weapon;
		std::string name;

	public:
		HumanB(std::string newName);
		void	attack();
		void	setWeapon(Weapon& weapon);
		~HumanB();
};

#endif
