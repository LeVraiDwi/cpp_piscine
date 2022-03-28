#include <iostream>
#include <ctime>
#include "Span.hpp"


void	add_rand_num(Span &sp, unsigned int const nb)
{
	int	r;

	srand(time(NULL));
	for (unsigned int i = 0; i < nb; i++)
	{
		r = rand() % 100;
//		std::cout << r << std::endl;
		sp.addNumber(r);
	}
	return;
}

int main()
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	
	try
	{
		sp.addNumber(11);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	Span sp2(0);
	try
	{
		std::cout << sp2.shortestSpan() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	Span	hsp(10001);

	for (unsigned int i = 0; i < 10001; i++)
		hsp.addNumber(i);
	try
	{
		std::cout << hsp.shortestSpan() << std::endl;
		std::cout << hsp.longestSpan() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	int tab[10] = {
		1,
		2,
		3,
		4,
		5,
		6,
		7,
		8,
		9,
		10,
	};
	Span	rsp(10);

	rsp.addNumber(tab, tab + 10);
	try
	{
		std::cout << rsp.shortestSpan() << std::endl;
		std::cout << rsp.longestSpan() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	Span randsp(60);

	add_rand_num(randsp, 60);
	try
	{
		std::cout << randsp.shortestSpan() << std::endl;
		std::cout << randsp.longestSpan() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
