#include "Zombie.hpp"

Zombie* newZombie(std::string name) {
	Zombie* newZombak = new Zombie(name);

	return(newZombak);
}
