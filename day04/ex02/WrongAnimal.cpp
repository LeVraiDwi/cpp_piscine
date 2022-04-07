#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void): _type(""){
    std::cout << "constructeur WrongAnimal" << std::endl;
	return;
}

WrongAnimal::WrongAnimal(std::string const & type): _type(type){
    std::cout << "constructeur WrongAnimal" << std::endl;
	return;
}

WrongAnimal::WrongAnimal(WrongAnimal const & src){
    std::cout << "constructeur WrongAnimal par copie" << std::endl;
    *this = src;
    return;
}

WrongAnimal::~WrongAnimal(){
    std::cout << "destructeur WrongAnimal" << std::endl;
	return;
}

WrongAnimal &    WrongAnimal::operator=(WrongAnimal const & rhs){
    this->_type = rhs.getType();
    return *this;
}

std::string WrongAnimal::getType() const{
    return (this->_type);
}

void    WrongAnimal::makeSound() const{
    std::cout << "POUET" << std::endl;
    return;
}
