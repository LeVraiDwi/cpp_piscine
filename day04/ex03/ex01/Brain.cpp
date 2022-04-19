#include "Brain.hpp"

Brain::Brain(){
	std::cout << "creation de brain" << std::endl;
    return;
}

Brain::Brain(Brain const & src){
	std::cout << "creation de brain par copie" << std::endl;
    *this = src;
    return;
}

Brain::~Brain(){
	std::cout << "destruction de brain" << std::endl;
    return;
}

Brain & Brain::operator=(Brain const & rhs)
{
    if (&rhs == this)
        return *this;
    std::copy(rhs._ideas, rhs._ideas + 100, this->_ideas);
    return * this;
}

std::string *   Brain::getIdeas(){
    return this->_ideas;
}
