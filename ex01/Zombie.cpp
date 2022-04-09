#include "Zombie.hpp"

const std::string &Zombie::getName() const {
	return this->name;
}

void Zombie::setName(const std::string &name) {
	this->name = name;
}

void Zombie::announce() {
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie() {
	std::cout << this->name << " was destroyed" << std::endl;
}
