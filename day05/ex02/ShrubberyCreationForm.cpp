#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target): Form("ShrubberyCreationForm", 145, 137), _target(target){
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src): Form(src), _target(src._target){
	std::cout << "constructeur ShrubberyCreationForm: " <<  this->getName() << " par copie" << std::endl;
	return;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
	std::cout << "destructeur ShrubberyCreationForm: " << this->getName() << std::endl;
	return;
}

ShrubberyCreationForm &		ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs){
	return *this;
}

void						ShrubberyCreationForm::doExecute(void) const{
	std::ofstream	ofs;
	std::string		file_name(this->_target);
	
	file_name.append("_shrubbery");
	ofs.open(file_name, std::ofstream::trunc);
	if (ofs.fail())
	{
		std::cout << "error when opening file" << std::endl;
		return;
	}
	ofs << TREE;
	ofs.close();
	ofs.close();
	return;
}
