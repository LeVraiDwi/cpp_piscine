#include "phonebook.hpp"

int	main()
{
	std::string	input;
	book	annuaire;

	input = "";
	while (input.compare("EXIT"))
	{
		std::cout << "que voulez vous faire:";
		std::getline(std::cin, input);
		if (!input.compare("ADD"))
			annuaire.add();
		else if (!input.compare("SEARCH"))
			annuaire.search();
		else if (!input.compare("EXIT"))
			return (1);
		else
			std::cout << "les commande valide sont ADD, SEARCH, EXIT" << std::endl;
	}
	return (1);
}
