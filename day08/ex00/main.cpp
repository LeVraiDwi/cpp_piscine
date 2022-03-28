#include <iostream>
#include <list>
#include "easyfind.hpp"

int	main(){
	int	tab[4] = {
		5,
		15,
		42,
		-34,
	};
	std::list<int>	l(tab, tab + 4);

	try 
	{
		std::cout << easyfind(l, 42) << " found in container" << std::endl;
		std::cout << easyfind(l, -34) << " found in container" << std::endl;
		std::cout << easyfind(l, 5) << " found in container" << std::endl;
		std::cout << easyfind(l, -5) << " found in container" << std::endl;
		std::cout << easyfind(l, 15) << " found in container" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	return 1;
}
