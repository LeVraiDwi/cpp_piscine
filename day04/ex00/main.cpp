#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(){
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    Cat chat;
    const Animal elephant("elephant");




    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << chat.getType() << " " << std::endl;
    std::cout << elephant.getType() << " " << std::endl;
    i->makeSound();
    chat.makeSound();
    elephant.makeSound();
    j->makeSound();
    meta->makeSound();
	delete meta;
	delete j;
	delete i;
    std::cout << "==================wrong=================" << std::endl;
    const   WrongAnimal * wcat = new WrongCat();
    const   WrongAnimal * wanimal = new WrongAnimal();
    
    std::cout << wcat->getType() << " " << std::endl;
    wcat->makeSound();
    std::cout << wanimal->getType() << " " << std::endl;
    wanimal->makeSound();
	delete wcat;
	delete wanimal;
    return (0);
}
