#include "Zombie.hpp"

int main(void) {

	int zombieCount = 10;
	Zombie* newHorde = zombieHorde(zombieCount, "Clone");

	for (int i = 0; i < zombieCount; i++) {
		std::cout << i + 1 << " ";
		newHorde[i].announce();
	}
	delete[] newHorde;
	return (0);
}
