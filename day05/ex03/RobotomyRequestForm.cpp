#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const & target): Form("RobotomyRequestForm", 72, 45), _target(target){
	return;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src): Form(src), _target(src._target){
	std::cout << "constructeur RobotomyRequestForm: " <<  this->getName() << " par copie" << std::endl;
	return;
}

RobotomyRequestForm::~RobotomyRequestForm(){
	std::cout << "destructeur RobotomyRequestForm: " << this->getName() << std::endl;
	return;
}

RobotomyRequestForm &		RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs){
	return *this;
}

void						RobotomyRequestForm::doExecute(void) const{
	srand(time(NULL));
	std::cout << "BZZZZZZZZZ......BZZZZZ..BZZZ" << std::endl;
	if (rand() % 2)
		std::cout << this->_target << " Robotimization failed  :(" << std::endl;
	else
		std::cout << this->_target << " Robotimization success :)" << std::endl;
	return;
}
