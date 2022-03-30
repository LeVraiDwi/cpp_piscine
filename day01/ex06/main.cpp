#include "Harl.hpp"

int	main(int argc, char **argv){
	Harl		karl;
	std::string	str;

	if (argc == 2 && argv[1])
	{
		str = argv[1];
		karl.complainFiltre(str);
	}
	return 0;
}
