#include "Cat.hpp"

Cat::Cat(): Animal("Cat"){
    std::cout << "constructeur Cat" << std::endl;
    this->_brain = new Brain;
    return;
}

Cat::Cat(Cat const & src): Animal(src){
    std::cout << "constructeur Cat par copie" << std::endl;
    this->_brain = new Brain(*src._brain);
    return;
}

Cat::~Cat(){
    std::cout << "destructeur Cat" << std::endl;
    delete this->_brain;
    return;
}

Cat &   Cat::operator=(Cat const & rhs){
    if (&rhs == this)
        return *this;
    this->_type = rhs.getType();
    delete this->_brain;
    this->_brain = new Brain;
    *this->_brain = *rhs._brain;
    return *this;
}

void    Cat::makeSound(void) const{
    std::cout << "Miaouh" << std::endl;
    return;
}

Brain * Cat::getBrain(){
    return this->_brain;
}
