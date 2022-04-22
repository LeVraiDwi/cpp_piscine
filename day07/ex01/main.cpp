#include <iostream>
#include <string>
#include "Iter.hpp"


template<typename T>
void	multiple(T x)
{
	x *= 2;
	return;
}

template<typename T>
void	print(T x)
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

	iter(tabb, 0, &print);
	iter(tab, 5, &print);
	iter(tab, 5, &multiple);
	iter(tab, 5, &print);
	iter(tabf, 2, &print);
	iter(tabf, 2, &multiple);
	iter(tabf, 2, &print);
	iter(tabs, 2, &print);
	return 0;
}
