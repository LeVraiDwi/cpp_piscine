#include "phonebook.h"

string	get_input()
{

}

int	main()
{
	string	input;
	book	annuaire;

	input = "";
	while (input.compare("EXIT"))
	{
		std::cout << "que voulez vous faire:";
		std::cin >> input;
		if (!input.compare("ADD"))
			annuaire.add();
		else if (!input.compare("SEARCH"))
			annuaire.search();
		else
			std::cout << "les commande valide sont ADD, SEARCH, EXIT" << endl;
	}
	return (1);
}