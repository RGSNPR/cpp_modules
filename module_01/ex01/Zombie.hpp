#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {

	private:
		std::string name;

	public:
		Zombie();
		Zombie(std::string newName);
		void setName(std::string newName);
		void announce(void);
		~Zombie();

};

Zombie* zombieHorde(int N, std::string name);

#endif
