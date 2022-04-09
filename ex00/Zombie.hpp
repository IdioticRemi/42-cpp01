#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie {
private:
	std::string name;
public:
	void announce();

	const std::string &getName() const;
	void setName(const std::string &name);

	virtual ~Zombie();
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif