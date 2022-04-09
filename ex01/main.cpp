#include "Zombie.hpp"

int main()
{
	int qty = 5;
	Zombie *horde = zombieHorde(qty, "Momo");

	for (int i = 0; i < qty; i++)
		horde[i].announce();

	delete []horde;
	return 0;
}