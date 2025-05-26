#include "Zombie.hpp"
#include <string>
#include <iostream>

Zombie::Zombie( void )
{
	return ;
}

Zombie::~Zombie( void )
{
	std::cout << this->_name << " was destroyed." << std::endl;
}

std::string	Zombie::getName( void ) const
{
	return (this->_name);
}

void	Zombie::setName( std::string &name )
{
	this->_name = name;
}

void	Zombie::announce( void )
{
	std::cout << this->_name << ":" << " BraiiiiiiinnnzzzZ..." << std::endl;
}
