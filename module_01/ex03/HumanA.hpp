#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include "Weapon.hpp"

class HumanA {
	private:
		Weapon& weapon;
		std::string name;

	public:
		HumanA(std::string startName, Weapon& weapon);
		const void	attack();
		~HumanA();
};

#endif
