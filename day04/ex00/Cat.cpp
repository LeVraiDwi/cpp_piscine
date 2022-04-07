#include "Cat.hpp"

Cat::Cat(): Animal("Cat"){
    std::cout << "constructeur Cat" << std::endl;
    return;
}

Cat::Cat(Cat const & src): Animal(src){
    std::cout << "constructeur Cat par copie" << std::endl;
    return;
}

Cat::~Cat(){
    std::cout << "destructeur Cat" << std::endl;
    return;
}

Cat &   Cat::operator=(Cat const & rhs){
    if (&rhs == this)
        return *this;
    this->_type = rhs.getType();
    return *this;
}

void    Cat::makeSound(void) const{
    std::cout << "Miaouh" << std::endl;
    return;
}
