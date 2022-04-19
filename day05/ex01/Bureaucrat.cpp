#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){
	return;
}

Bureaucrat::Bureaucrat(std::string const & name, int grade): _name(name){
	std::cout << "constructeur Bureaucrat: " << this->_name << std::endl;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade = grade;
	return;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src): _name(src._name){
	std::cout << "constructeur Bureaucrat: " <<  this->_name << " par copie" << std::endl;
	return;
}

Bureaucrat::~Bureaucrat(){
	std::cout << "destructeur Bureaucrat: " << this->_name << std::endl;
	return;
}

Bureaucrat &		Bureaucrat::operator=(Bureaucrat const & rhs){
	this->_grade = rhs.getGrade();
	return *this;
}

int					Bureaucrat::getGrade(void) const{
	return this->_grade;
}

std::string const	Bureaucrat::getName(void) const{
	return this->_name;
}

void				Bureaucrat::rankUp(void){
	if (this->_grade == 1)
		throw GradeTooHighException();
	else
		this->_grade--;
	return;
}

void				Bureaucrat::rankDown(void){
	if (this->_grade > 150)
		throw GradeTooLowException();
	else
		this->_grade++;
	return;
}

void				Bureaucrat::signForm(Form & form){
	try
	{
		form.beSigned(*this);
	}
	catch (Form::GradeTooLowException &)
	{
		std::cout << this->_name << " coundn't sign " << form.getName() << " because his rank is to low" << std::endl;
		return;
	}
	std::cout << this->_name << " signed " << form.getName() << std::endl;
	return;
}

Bureaucrat::GradeTooHighException::GradeTooHighException(){
	std::cout << "construction GradeTooHighException" << std::endl;
	return;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw(){
	std::cout << "destructeur GradeTooHighException" << std::endl;
	return;
}

char const	*Bureaucrat::GradeTooHighException::what() const throw(){
	return "Bureaucrat grade to high";
}

Bureaucrat::GradeTooLowException::GradeTooLowException(): std::exception(){
	std::cout << "construction GradeTooLowException" << std::endl;
	return;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw(){
	std::cout << "destructeur GradeTooLowhException" << std::endl;
	return;
}

char const	*Bureaucrat::GradeTooLowException::what() const throw(){
	return "Bureaucrat grade to low";
}

std::ostream &	operator<<(std::ostream & o, Bureaucrat const & rhs){
	o << rhs.getName() << ", Bureaucrat grade: " << rhs.getGrade();
	return o;
}
