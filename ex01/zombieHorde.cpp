#include "Zombie.hpp"

Zombie *zombieHorde(int qty, std::string name)
{
	Zombie *horde = new Zombie[qty];

	for (int i = 0; i < qty; i++)
		horde[i].setName(name);

	return (horde);
}
