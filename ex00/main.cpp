#include "Zombie.hpp"

int main()
{
	Zombie *zombie = newZombie("Momo");

	zombie->announce();
	randomChump("Daniel");

	delete zombie;
	return 0;
}