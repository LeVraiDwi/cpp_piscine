#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(){
    const Animal* animals[10];

	for (int i = 0; i < 5; i++)
		animals[i] =  new Dog();
	for (int i = 5; i < 10; i++)
		animals[i] =  new Cat();
	for (int i = 0; i < 10; i++)
		delete animals[i];

	std::cout << "DEEP COPY :" << std:: endl;
	Dog	a;
	Dog b;

	b = a;
	std::cout << "ADDRESS OF A BRAIN :" << (a.getBrain()) << std:: endl;
	std::cout << "ADDRESS OF B BRAIN :" << (b.getBrain()) << std:: endl;

	Cat	cata;
	Cat catb;

	catb = cata;
	std::cout << "ADDRESS OF A BRAIN :" << (cata.getBrain()) << std:: endl;
	std::cout << "ADDRESS OF B BRAIN :" << (catb.getBrain()) << std:: endl;
    return (0);
}
