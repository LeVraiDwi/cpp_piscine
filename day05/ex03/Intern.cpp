#include "Intern.hpp"

Intern::Intern(){
	std::cout << "constructeur Intern" << std::endl;
	return;
}

Intern::Intern(Intern const & src){
	std::cout << "constructeur Intern par copie" << std::endl;
	return;
}

Intern::~Intern(){
	std::cout << "destructeur Intern" << std::endl;
	return;
}

Intern &		Intern::operator=(Intern const & rhs){
	return *this;
}

Form *	Intern::_newPresidential(std::string const & target){
	return new PresidentialPardonForm(target);
}

Form *	Intern::_newRobotomi(std::string const & target){
	return new RobotomyRequestForm(target);
}

Form *	Intern::_newTree(std::string const & target){
	return new ShrubberyCreationForm(target);
}

std::string Intern::_form[3]{
	"presidential pardon",
	"robotomy request",
	"shrubbery creation",
};

Intern::FunctionPointer 	Intern::_funcPointer[3]{
	&Intern::_newPresidential,
	&Intern::_newRobotomi,
	&Intern::_newTree,
};

Form *						Intern::makeForm(std::string const & request, std::string const & target){
	try
	{
		for (int i = 0; i < 3; i++)
			if (this->_form[i] == request)
			{
				std::cout << "Intern create " << this->_form[i] << std::endl;
				return (this->*_funcPointer[i])(target);
			}
		throw Intern::FormNotFound();
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
		return 0;
	}
	return 0;
}

Intern::FormNotFound::FormNotFound(): exception(){
	return;
}

Intern::FormNotFound::~FormNotFound() throw(){
	return;
}

char const *	Intern::FormNotFound::what() const throw(){
	return "Form doesn't exist";
}
