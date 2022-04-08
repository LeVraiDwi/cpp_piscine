#include "Ice.hpp"

Ice::Ice(): AMateria("ice"){
	return;
}

Ice::Ice(Ice const & src): AMateria(src._type){
	return;
}

Ice::~Ice()
{
	return;
}

Ice &	Ice::operator=(Ice const & src){
	if (this == &src)
		return *this;
	return *this;
}

AMateria	*Ice::clone() const{
	return new Ice;
}

void	Ice::use(ICharacter& target){
	std::cout <<  "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	return;
}
