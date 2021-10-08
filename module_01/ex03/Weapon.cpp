#include "Weapon.hpp"


Weapon::Weapon() : type("empty type") {

}

Weapon::Weapon(const std::string& startType) : type(startType) {

}

const std::string& Weapon::getType(){
	return(type);
}

void Weapon::setType(const std::string& newType) {
	type = newType;

	return ;
}

Weapon::~Weapon() {

}
