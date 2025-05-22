#include "Zombie.hpp"
#include <iostream>

Zombie*	zombieHorde( int N, std::string name )
{
	Zombie*	array_ptr = new Zombie[N];
	std::cout << name << std::endl;
	return (array_ptr);
}
