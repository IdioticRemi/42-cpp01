#ifndef CPP01_HARL_HPP
#define CPP01_HARL_HPP

#include <string>
#include <iostream>

class Harl {
public:
	void complain(std::string level);
private:
	void info();
	void debug();
	void error();
	void warning();
};


#endif
