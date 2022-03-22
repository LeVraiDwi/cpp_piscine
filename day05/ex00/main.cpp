#include "Bureaucrat.hpp"

int	main(){
	Bureaucrat	soso("Socrate", 1);
	Bureaucrat	popo("Hypocrate", 150);
	try
	{
		Bureaucrat	phiphi("Philocrate", -1);
		Bureaucrat	nono("Nonocrate", 155);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << popo << std::endl;
	try
	{
		popo.rankUp();
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << popo << std::endl;
	std::cout << soso << std::endl;
	try
	{
		soso.rankUp();
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << soso << std::endl;
	return (0);
};
