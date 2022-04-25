#include <iostream>
#include <string>
#include "Iter.hpp"

template<typename T>
void	print(T const x)
{
	std::cout << x << std::endl;
}

int	main(){
	int	tab[5] = {
		15,
		23,
		0,
		34,
		4,
	};

	float	tabf[2] = {
		34.14,
		12.42,
	};

	std::string	tabs[2] = {
		"hello",
		"ton",
	};

	iter(tab, 5, &print);
	iter(tabs, 2, &print);
	iter(tabf, 2, &print);
	return 0;
}
