#include <ctime>
#include <iostream>
#include <cstdlib> 
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *	generate(void)
{
	srand(time(NULL));

	int		i = rand() % 3;
	Base	*ret;

	switch (i) {
		case 0:
			ret = new A;
			std::cout << "Instance of class A generated" << std::endl;
			break;
		case 1:
			ret = new B;
			std::cout << "Instance of class B generated" << std::endl;
			break;
		case 2:
			ret = new C;
			std::cout << "Instance of class C generated" << std::endl;
			break;
	}
	return ret;
}

void	identify_from_pointer(Base *p)
{
	A	*a = dynamic_cast<A *>(p);
	if (!a)
		std::cout << "this is not a class A" << std::endl;
	else
		std::cout << "this is a class A" << std::endl;
	B	*b = dynamic_cast<B *>(p);
	if (!b)
		std::cout << "this is not a class B" << std::endl;
	else
		std::cout << "this is a class B" << std::endl;
	C	*c = dynamic_cast<C *>(p);
	if (!c)
		std::cout << "this is not a class C" << std::endl;
	else
		std::cout << "this is a class C" << std::endl;
}

void	identify_from_reference(Base & p)
{
	try
	{
		A	&a = dynamic_cast<A &>(p);
		(void)a;
		std::cout << "this is a class A" << std::endl;
	}
	catch (std::exception &)
	{
		std::cout << "this is not a class A" << std::endl;
	}
	try
	{
		B	&b = dynamic_cast<B &>(p);
		(void)b;
		std::cout << "this is a class B" << std::endl;
	}
	catch (std::exception &)
	{
		std::cout << "this is not a class B" << std::endl;
	}
	try
	{
		C	&c = dynamic_cast<C &>(p);
		(void)c;
		std::cout << "this is a class C" << std::endl;
	}
	catch (std::exception &)
	{
		std::cout << "this is not a class C" << std::endl;
	}
}

int main()
{
	Base	*base;

	base = generate();
	identify_from_pointer(base);
	identify_from_reference(*base);
	return 0;
}
