#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void){
	this->_nb_page = 0;
	this->_oldest = 0;
	return;
}

PhoneBook::~PhoneBook(void){
	return;
}

void	PhoneBook::add(void)
{
	std::string	index;

	if(this->_nb_page < 8)
	{
		if (!this->_PhoneBook[this->_nb_page].complete())
			std::cout << "chaine vide" << std::endl;
		else
			this->_nb_page++;
	}
	else
	{
		std::cout << "l'annuaire est plein index: " << this->_oldest + 1 << " remplacer." << std::endl;
		if (!this->_PhoneBook[this->_oldest].complete())
			std::cout << "chaine vide" << std::endl;
		else
		{
			this->_oldest++;
			if (this->_oldest >= 8)
				this->_oldest = 0;
		}
	}
	return;
}

void	PhoneBook::_aff_index(void) const{

	std::cout << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "First name" << "|";
	std::cout << std::setw(10) << "Last name" << "|";
	std::cout << std::setw(10) << "Nick name" << std::endl;
	for (int i = 0; i < this->_nb_page; i++)
		this->_PhoneBook[i].aff_format_line(i + 1);
	return;
}

void	PhoneBook::search(void) const{
	std::string	str;
	std::string	index;
	
	if (!this->_nb_page)
	{
		std::cout << "aucun contact" << std::endl;
		return;
	}
	else
		this->_aff_index();
	std::cout << "choisissez un index:";
	std::getline(std::cin, index);
	if (index.length() == 1 && index[0] > '0' && index[0] < this->_nb_page + '0' + 1)
		this->_aff_line(index[0] - '0' - 1);
	else
		std::cout << "index choisis invalide" << std::endl;
		
	return;
}

void	PhoneBook::_aff_line(int index) const{
	this->_PhoneBook[index].afficher();
	return;
}
