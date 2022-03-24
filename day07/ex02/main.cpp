#include <iostream>
#include <string>
#include "Array.hpp"


int	main(){
	Array<int> a(5);
	std::string	tabs[2] = {
		"bat",
		"man"
	};
	Array<std::string> tab(2);
	Array<std::string>	*cpy = new Array<std::string>();

	try
	{
		for (int i = 0; i < tab.size(); i++)
		{
			tab[i] = tabs[i];
			std::cout << tab[i] << std::endl;
		}
		a[1] = 1;
		std::cout << a[1] << std::endl;
		std::cout << tab.size() << std::endl;
		*cpy = tab;
		std::cout << "heu" << std::endl;
		std::cout << cpy->size() << std::endl;
		std::cout << (*cpy)[3] << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	delete cpy;
	return 0;
}
