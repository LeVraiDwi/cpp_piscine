#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(){
	Bureaucrat	soso("Socrate", 1);
	Bureaucrat	popo("Hypocrate", 150);
	Form		a37("Formulaire A37", 45, 47);
	Form		a36("formulaire A36", 44, 56);

	soso.signForm(a37);
	std::cout << a37 << std::endl;
	popo.signForm(a36);
	std::cout << a36 << std::endl;
	return (0);
};
