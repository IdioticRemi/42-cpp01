#include "Weapon.hpp"

const std::string &Weapon::getType() const {
	return type;
}

void Weapon::setType(const std::string &type) {
	Weapon::type = type;
}

Weapon::Weapon(const std::string &type) {
	this->type = type;
}

Weapon::Weapon() {
	this->type = "default weapon";
}
