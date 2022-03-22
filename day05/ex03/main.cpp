#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main(){
	Bureaucrat	soso("Socrate", 1);
	Bureaucrat	popo("Hypocrate", 150);
	Intern		toto;
	Form		*a37;
	Form		*a36;
	Form		*a1;

	a37 = toto.makeForm("shrubbery creation", "Mars");
	std::cout << *a37 << std::endl;
	soso.signForm(*a37);
	soso.executeForm(*a37);
	popo.executeForm(*a37);

	a36 = toto.makeForm("robotomy request", "Nono");
	std::cout << *a36 << std::endl;
	soso.signForm(*a36);
	soso.executeForm(*a36);
	popo.executeForm(*a36);

	a1 = toto.makeForm("presidential pardon", "jean Le Mechant");
	std::cout << *a1 << std::endl;
	soso.signForm(*a1);
	soso.executeForm(*a1);
	popo.executeForm(*a1);

	std::cout << toto.makeForm("valider le cpp", "theo") << std::endl;
	delete a1;
	delete a37;
	delete a36;
	return (0);
};
