#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const & target): Form("PresidentialPardonForm", 72, 45), _target(target){
	return;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src): Form(src), _target(src._target){
	std::cout << "constructeur PresidentialPardonForm: " <<  this->getName() << " par copie" << std::endl;
	return;
}

PresidentialPardonForm::~PresidentialPardonForm(){
	std::cout << "destructeur PresidentialPardonForm: " << this->getName() << std::endl;
	return;
}

PresidentialPardonForm &		PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs){
	return *this;
}

void						PresidentialPardonForm::doExecute(void) const{
	std::cout << this->_target << " has been forgive by Zaphod Beeblebrox" << std::endl;
	return;
}
