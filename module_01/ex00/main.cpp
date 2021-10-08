#include "Zombie.hpp"

int main(void) {
	std::string names[6] = {"Bullet-in-Head", "Chocker",
			"Butchered Guy", "Onlylegs", "Guts Lover", "Your ex"};

	Zombie* averageZombie_1;
	Zombie* averageZombie_2;
	averageZombie_1 = newZombie(names[0]);
	averageZombie_2 = newZombie(names[1]);
	averageZombie_1->announce();
	averageZombie_2->announce();

	for (int i = 2; i < 6; i++) {
		randomChump(names[i]);
	}
	return (0);
}
