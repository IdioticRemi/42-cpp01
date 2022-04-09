#ifndef CPP01_HUMANB_HPP
#define CPP01_HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB {
private:
	std::string name;
	Weapon *weapon;
public:
	HumanB(const std::string &name);
	void setWeapon(Weapon &weapon);

	void attack();
};


#endif
