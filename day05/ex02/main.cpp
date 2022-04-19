#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(){
	Bureaucrat	soso("Socrate", 1);
	Bureaucrat	popo("Hypocrate", 150);
	ShrubberyCreationForm		a37("jolie");
	RobotomyRequestForm			a36("Nono");
	PresidentialPardonForm		a1("Jean Le Tueur");

	soso.signForm(a37);
	soso.executeForm(a37);
	popo.executeForm(a37);

	soso.signForm(a36);
	soso.executeForm(a36);
	popo.executeForm(a36);

	soso.signForm(a1);
	soso.executeForm(a1);
	popo.executeForm(a1);
	return (0);
};
