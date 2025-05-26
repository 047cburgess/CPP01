#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class Zombie
{
	private:
		std::string _name;
				
	public:
		Zombie( void );
		~Zombie( void );
		std::string	getName( void ) const;
		void	setName( std::string &name );
		void	announce( void );

};

Zombie*	zombieHorde( int N, std::string name );

# endif
