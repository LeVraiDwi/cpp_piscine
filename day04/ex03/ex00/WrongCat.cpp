#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("WrongCat"){
    std::cout << "constructeur WrongCat" << std::endl;
    return;
}

WrongCat::WrongCat(WrongCat const & src): WrongAnimal(src){
    std::cout << "constructeur WrongCat par copie" << std::endl;
    return;
}

WrongCat::~WrongCat(){
    std::cout << "destructeur WrongCat" << std::endl;
    return;
}

WrongCat &   WrongCat::operator=(WrongCat const & rhs){
    if (&rhs == this)
        return *this;
    this->_type = rhs.getType();
    return *this;
}

void    WrongCat::makeSound(void) const{
    std::cout << "Miaouh" << std::endl;
    return;
}
