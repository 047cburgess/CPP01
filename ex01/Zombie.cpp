#include "Zombie.hpp"
#include <string>
#include <iostream>

Zombie::Zombie( std::string name ) : _name(name) {};

Zombie::~Zombie( void )
{
	std::cout << this->_name << " was destroyed." << std::endl;
}

std::string	Zombie::getName( void )
{
	return (this->_name);
}
