#ifndef CPP01_HUMANA_HPP
#define CPP01_HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA {
public:
	HumanA(const std::string &name, Weapon &weapon);

	void attack();

private:
	std::string name;
	Weapon *weapon;
};


#endif
