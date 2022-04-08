#include "Cure.hpp"

Cure::Cure(): AMateria("cure"){
	return;
}

Cure::Cure(Cure const & src): AMateria(src._type){
	return;
}

Cure::~Cure()
{
	return;
}

Cure &	Cure::operator=(Cure const & src){
	if (this == &src)
		return *this;
	return *this;
}

AMateria	*Cure::clone() const{
	return new Cure;
}

void	Cure::use(ICharacter& target){
	std::cout <<  "* heals " << target.getName() << "'s wounds *" << std::endl;
	return;
}
