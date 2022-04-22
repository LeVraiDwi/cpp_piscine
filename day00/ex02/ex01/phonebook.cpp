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
		std::cout << "l'annuaire est plein index: " << this->_oldest << " remplacer." << std::endl;
		if (!this->_PhoneBook[this->_oldest].complete())
			std::cout << "chaine vide" << std::endl;
		this->_oldest++;
		if (this->_oldest >= 8)
		 this->_oldest = 0;
	}
	return;
}

int	PhoneBook::_aff_index(std::string str) const{
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
		if (this->_PhoneBook[i].comp(str))
		{
			this->_PhoneBook[i].aff_format_line(i + 1);
			nb_line++;
		}
		i++;
	}
	return (nb_line);
}

void	PhoneBook::search(void) const{
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

void	PhoneBook::_aff_line(int index) const{
	this->_PhoneBook[index].afficher();
	return;
}
