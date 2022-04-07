#include "Animal.hpp"

Animal::Animal(void): _type(""){
    std::cout << "constructeur Animal" << std::endl;
	return;
}

Animal::Animal(std::string const & type): _type(type){
    std::cout << "constructeur Animal" << std::endl;
	return;
}

Animal::Animal(Animal const & src){
    std::cout << "constructeur Animal par copie" << std::endl;
    *this = src;
    return;
}

Animal::~Animal(){
    std::cout << "destructeur Animal:" << this->getType() << std::endl;
	return;
}

Animal &    Animal::operator=(Animal const & rhs){
    this->_type = rhs.getType();
    return *this;
}

std::string Animal::getType() const{
    return (this->_type);
}

void    Animal::makeSound() const{
    std::cout << " " << std::endl;
    return;
}
