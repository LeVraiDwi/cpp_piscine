#include <iostream>
#include <Array.hpp>

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
	std::cout << "======================================================mon main=========================================" << std::endl;
	{
	Array<int> a(5);
	std::string	tabs[2] = {
		"bat",
		"man"
	};
	Array<std::string> tab(2);
	Array<std::string>	*cpy = new Array<std::string>();
	Array<std::string>	 empty;

	try
	{
		empty[0];
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		for (int i = 0; i < static_cast<int>(tab.size()); i++)
		{
			tab[i] = tabs[i];
			std::cout << tab[i] << std::endl;
		}
		a[1] = 1;
		std::cout << a[1] << std::endl;
		std::cout << tab.size() << std::endl;
		*cpy = tab;
		std::cout << cpy->size() << std::endl;
		for (int i = 0; i < static_cast<int>(tab.size()); i++)
		{
			std::cout << "&tab: " << &tab[i] << std::endl;
			std::cout << "&cpy: " << &cpy[i] << std::endl;
		}
		std::cout << (*cpy)[3] << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	delete cpy;
	}
    return 0;
}
