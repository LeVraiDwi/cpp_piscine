#include "phonebook.hpp"

book::book(void){
	this->_nb_page = 0;
	return;
}

book::~book(void){
	return;
}

void	book::add(void)
{
	std::string	index;

	if(this->_nb_page < 8)
	{
		if (!this->_book[this->_nb_page].complete())
			std::cout << "chaine vide" << std::endl;
		else
			this->_nb_page++;
	}
	else
	{
		std::cout << "l'annuaire est plein qu'elle index remplacer: ";
		std::getline(std::cin, index);
		if (index.length() == 1 && index[0] > '0' && index[0] < '9')
		{
			if (!this->_book[index[0] - '0' - 1].complete())
				std::cout << "chaine vide" << std::endl;
		}
		else
			std::cout << "index invalide" << std::endl;
	}
	return;
}

int	book::_aff_index(std::string str) const{
	int	i;
	int	nb_line;

	std::cout << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "First name" << "|";
	std::cout << std::setw(10) << "Last name" << "|";
	std::cout << std::setw(10) << "Nick name" << std::endl;
	i = 0;
	nb_line = 0;
	while(i < this->_nb_page)
	{
		if (this->_book[i].comp(str))
		{
			this->_book[i].aff_format_line(nb_line + 1);
			nb_line++;
		}
		i++;
	}
	return (nb_line);
}

void	book::search(void) const{
	std::string	str;
	std::string	index;
	int		nb_line;
	
	if (!this->_nb_page)
	{
		std::cout << "aucun contact" << std::endl;
		return;
	}
	std::cout << "qui cherchez vous?";
	std::getline(std::cin, str);
	if (str.empty())
	{
		std::cout << "chaine vide" << std::endl;
		return;
	}
	else
	{
		nb_line = this->_aff_index(str);
	}
	if (nb_line == 0)
		return;
	std::cout << "choisissez un index:";
	std::getline(std::cin, index);
	if (index.length() == 1 && index[0] > '0' && index[0] < nb_line + '0' + 1)
		this->_aff_line(index[0] - '0' - 1);
	else
		std::cout << "index choisis invalide" << std::endl;
		
	return;
}

void	book::_aff_line(int index) const{
	this->_book[index].afficher();
	return;
}
