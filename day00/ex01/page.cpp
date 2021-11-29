#include "phonebook.hpp"

page::page(void){
	return;
}

page::~page(void){
	return;
}

int	page::complete(void){
	std::string	nick;
	std::string	first;
	std::string	last;
	std::string	secret;

	std::cout << "First Name:"
	std::cin >> this.first;
	if(first.empty())
		return (0);
	std::cout << "Last Name:"
	std::cin >> last;
	if(last.empty())
		return (0);
	std::cout << "Nickname:"
	std::cin >> this.nick;
	if(nick.empty())
		return (0);
	std::cout << "Darkest secret:"
	std::cin >> this.secret;
	if(secret.empty())
		return (0);
	this._first.assign(first);
	this._last.assign(last);
	this._nick.assign(nick);
	this._secret.assign(secret);
	return (1);
}

void	page::_format(std::string str) const{
	if (str.length() > 10)
		std::cout << str.sustr(0, 9) << ".";
	else
		std::cout << std::setw(10) << str;
	return;
}

void	page::aff_format_line(int i) const{
	std::cout << std::setw(10) << i;
	std::cout << "|";
	this._format(this._first);
	std::cout << "|";
	this._format(this._last);
	std::cout << "|";
	this._format(this._nick);
	std::cout << endl;
	return;
}

int	page::comp(std::string str) const{
	if (!this._first.compare(0, str.length(), str))
		return (1);
	else if (!this._last.compare(0, str.length(), str))
		return (1);
	else if (!this._nick.compare(0, str.length(), str))
		return (1);
	return (0);
}

void	page::afficher(void) const{
	std::cout << "First name:" << this._first << endl;
	std::cout << "Last name:" << this._last << endl;
	std::cout << "Nickname:" << this._nick << endl;
	std::cout << "Darkest secret:" << this._secret << endl;
	return;
}
