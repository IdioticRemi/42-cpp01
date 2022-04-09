#include "HumanB.hpp"

void HumanB::setWeapon(Weapon &weapon) {
	HumanB::weapon = &weapon;
}

void HumanB::attack() {
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

HumanB::HumanB(const std::string &name) :name(name), weapon((Weapon *)0) {}

