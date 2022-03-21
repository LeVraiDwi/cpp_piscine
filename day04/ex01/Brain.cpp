#include "Brain.hpp"

Brain::Brain(){
    return;
}

Brain::Brain(Brain const & src){
    *this = src;
    return;
}

Brain::~Brain(){
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
