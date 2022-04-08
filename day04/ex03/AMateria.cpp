#include "AMateria.hpp"

AMateria::AMateria(): _type("Vide"){
	return;
}

AMateria::AMateria(std::string const & type): _type(type){
	return;
}

AMateria::AMateria(AMateria const & src): _type(src._type){
	return;
}

AMateria::~AMateria(){
	return;
}

AMateria &	AMateria::operator=(AMateria const & rhs){
	if (this == &rhs)
		return *this;
	return *this;
}

std::string const &	AMateria::getType() const{
	return this->_type;
}

void	AMateria::use(ICharacter& target){
	std::cout <<  "* Use materia on :" << target.getName() << " *" << std::endl;
	return;
}
