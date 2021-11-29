#include "phonebook.hpp"

book::book(void){
	this._nb_page = 0;
	return;
}

book::~book(void){
	return;
}

void	book::add(void)
{
	int	index;

	if(this._nb_page < 8)
	{
		if (!this._book[this._nb_page].complete)
			std::cout << "chaine vide" << endl;
		else
			this._nb_page++;
	}
	else
	{
		std::cout << "l'annuaire est plein qu'elle index remplacer?";
		std::cin >> index;
		if (index > 0 && index < 9)
		{
			if (!this._boo[index - 1].complete);
				std::cout << "chaine vide" << endl;
		}
		else
			std::cout << "index invalide" << endl;
	}
	return;
}

int	book::_aff_index(std::string str) const{
	int	i;
	int	nb_line;

	std::cout << std::stew(10) << "Index" << "|";
	std::cout << std::stew(10) << "First name" << "|";
	std::cout << std::stew(10) << "Last name" << "|";
	std::cout << std::stew(10) << "Nick name" << endl;
	i = 0;
	nb_line = 0;
	while(i < this._nb_page)
	{
		if (this.book[i].comp(str))
		{
			this.book[i].aff_format_line(i);
			nb_line++;
		}
	}
	return (nb_line);
}

void	book::search(void) const{
	std::string	str;
	int		index;
	int		nb_line;
	
	if (this._nb_page)
		this.aff_index();
	else
	{
		std::cout << "aucun contact" << endl;
		return;
	}
	std::cout << "qui cherchez vous?";
	std::cin >> str;
	if (str.empty())
	{
		cout << "chaine vide" << endl;
		return;
	}
	else
	{
		nb_line = book.aff_index(str);
	}
	std::cout << "choisissez un index:"
	std::cin >> index;
	if (index > 0 && index <= nb_line)
		this._aff_line(index - 1);
	else
		std::cout << "index choisis invalide" << endl;
		
	return;
}

void	book::_aff_line(int index) const{
	this.book[index].afficher();
	return;
}
