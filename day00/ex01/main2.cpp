#include <iomanip>
#include <iostream>

int main()
{
	std::string	test;

	test = "allo le monde";
	std::cout << std::setw(10) << "eruf" << std::endl;
	std::cout << "test" << std::endl;
	std::cout << std::setw(10) << "index" << "|";
	std::cout << std::setw(10) << "First Name" << "|";
	std::cout << std::setw(10) << "Last Name" << "|";
	std::cout << std::setw(10) << "Nick name" << "|" << std::endl;
	std::cout << std::setw(10) << test.substr(0, 10) << std::endl;
	return (1);
}
