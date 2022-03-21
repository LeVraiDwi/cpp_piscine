#include "Dog.hpp"

Dog::Dog(): Animal("Dog"){
    std::cout << "constructeur Dog" << std::endl;
    return;
}

Dog::Dog(Dog const & src): Animal(src){
    std::cout << "constructeur Dog par copie" << std::endl;
    return;
}

Dog::~Dog(){
    std::cout << "destructeur Dog" << std::endl;
    return;
}

Dog &   Dog::operator=(Dog const & rhs){
    this->_type = rhs.getType();
    return *this;
}

void    Dog::makeSound() const{
    std::cout << "Wouf" << std::endl;
    return;
}
