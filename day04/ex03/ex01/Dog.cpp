#include "Dog.hpp"

Dog::Dog(): Animal("Dog"){
    std::cout << "constructeur Dog" << std::endl;
    this->_brain = new Brain();
    return;
}

Dog::Dog(Dog const & src): Animal(src){
    std::cout << "constructeur Dog par copie" << std::endl;
    this->_brain = new Brain(*src._brain);
    return;
}

Dog::~Dog(){
    std::cout << "destructeur Dog" << std::endl;
    delete this->_brain;
    return;
}

Dog &   Dog::operator=(Dog const & rhs){
    if (&rhs == this)
        return *this;
    this->_type = rhs.getType();
    delete this->_brain;
    this->_brain = new Brain;
    *this->_brain = *rhs._brain;
    return *this;
}

void    Dog::makeSound() const{
    std::cout << "Wouf" << std::endl;
    return;
}

Brain * Dog::getBrain(){
    return this->_brain;
}
