#include <iostream>
#include "Bsp.hpp"

int main(void)
{
	Point const a(-1, -1);
	Point const b(0, 1);
	Point const c(1, -1);
	Point const point(0, -1);

	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
	std::cout << bsp(a, b, c, point) << std::endl;
	return 0;
}
