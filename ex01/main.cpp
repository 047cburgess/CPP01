#include "Zombie.hpp"
#include <iostream>

int	main(void)
{
	Zombie* my_zombies = zombieHorde(5, "Casey");
	std::cout << my_zombies[0].getName() << std::endl;
}
