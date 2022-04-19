#include "Form.hpp"

Form::Form(): _signable(0), _executable (0){
	return;
}

Form::Form(std::string const & name, int signable, int executable): _name(name), _signable(signable), _executable(executable){
	std::cout << "constructeur Form: " << this->_name << std::endl;
	if (this->_signable < 1 || this->_executable < 1)
		throw Form::GradeTooHighException();
	else if (this->_signable > 150 || this->_executable > 150)
		throw Form::GradeTooLowException();
	else
		this->_signed = false;
	return;
}

Form::Form(Form const & src): _name(src._name), _signable(src._signable), _executable(src._executable){
	std::cout << "constructeur Form: " <<  this->_name << " par copie" << std::endl;
	this->_signed = false;
	return;
}

Form::~Form(){
	std::cout << "destructeur Form: " << this->_name << std::endl;
	return;
}

Form &		Form::operator=(Form const & rhs){
		this->_signed = rhs._signed;
	return *this;
}

int					Form::getGradeSigne(void) const{
	return this->_signable;
}

int					Form::getGradeExecute(void) const{
	return this->_executable;
}

bool				Form::isSigned(void) const{
	return this->_signed;
}

std::string const	Form::getName(void) const{
	return this->_name;
}

void				Form::beSigned(Bureaucrat const & bcrat){
	if (bcrat.getGrade() > this->_signable)
		throw Form::GradeTooLowException();
	else
		this->_signed = true;
	return;
}

Form::GradeTooHighException::GradeTooHighException(){
	std::cout << "construction GradeTooHighException" << std::endl;
	return;
}

Form::GradeTooHighException::~GradeTooHighException() throw(){
	std::cout << "destructeur GradeTooHighException" << std::endl;
	return;
}

char const	*Form::GradeTooHighException::what() const throw(){
	return "Form grade to high";
}

Form::GradeTooLowException::GradeTooLowException(): std::exception(){
	std::cout << "construction GradeTooLowException" << std::endl;
	return;
}

Form::GradeTooLowException::~GradeTooLowException() throw(){
	std::cout << "destructeur GradeTooLowhException" << std::endl;
	return;
}

char const	*Form::GradeTooLowException::what() const throw(){
	return "Form grade to low";
}

std::ostream &	operator<<(std::ostream & o, Form const & rhs){
	o << rhs.getName() << " Form, need grade " << rhs.getGradeSigne() << " to be sign.";
	o << " and can be execute with grade " << rhs.getGradeExecute();
	if (rhs.isSigned())
		o << ". The form is signed.";
	else
		o << ". The form is not signed";
	return o;
}
