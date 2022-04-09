#include "Harl.hpp"

void Harl::complain(std::string level) {
	std::string types[]		= {"INFO", "DEBUG", "WARNING", "ERROR"};
	void (Harl::* fncs[])()	= {&Harl::info, &Harl::debug, &Harl::warning, &Harl::error};

	for (int i = 0; i < 4; i++)
	{
		void (Harl::*fn)() = fncs[i];
		if (types[i] == level)
		{
			(this->*fn)();
			return;
		}
	}

	std::cout << "OwO what's this?" << std::endl;
}

void Harl::info() {
	std::cout << "Harl just printed an informative message" <<std::endl;
}

void Harl::debug() {
	std::cout << "Harl just printed a debug message" <<std::endl;
}

void Harl::error() {
	std::cout << "Harl just printed an error message" <<std::endl;
}

void Harl::warning() {
	std::cout << "Harl just printed a warning message" <<std::endl;
}
