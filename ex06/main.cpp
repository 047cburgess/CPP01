#include "Harl.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "Usage: ./harlFilter \"<complaint>\"" << std::endl;
	}
	Harl	my_harl;

	my_harl.complain("DEBUG");
	my_harl.complain("WARNING");
	my_harl.complain("ERROR");
	my_harl.complain("INFO");
	my_harl.complain("NOT VALID");
}
