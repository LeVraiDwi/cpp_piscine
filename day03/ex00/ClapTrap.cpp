#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string const & name): _name(name), _pv(10), _mana(10), _dmg(0){
	std::cout << "Assemblage de ClapTrap: " <<  this->_name << ". HELLO HUMAN!" << std::endl;
	return;
}

ClapTrap::~ClapTrap(){
	std::cout << "Destruction de ClapTrap: " << this->_name << ". W..H.....Y ME...EE..E!" << std::endl;
	return ;
}
	
ClapTrap::ClapTrap(ClapTrap const & cpy){
	std::cout << "Dublication de ClapTrap: " <<  cpy._name << ". HELLO HUMAN!" << std::endl;
	*this = cpy;
	return;
}

ClapTrap &	ClapTrap::operator=(ClapTrap const & cpy){
	this->_name = cpy._name;
	this->_pv = cpy._pv;
	this->_mana = cpy._mana;
	this->_dmg = cpy._dmg;
	return (*this);
}

void	ClapTrap::attack(std::string const & target){
	std::cout << "ClapTrap: " << this->_name;
	if (this->_mana == 0)
	{
		std::cout << " n'a plus de batterie :(. Energie: " << this->_mana << std::endl; 
		return;
	}
	this->_mana--;
	std::cout << " attacks " << target << ", causing " << this->_dmg << " points of damage!" << std::endl;
	return;
}

void	ClapTrap::takeDamage(unsigned int amount){
	std::cout << "ClapTrap: " << this->_name;
	if (this->_pv == 0)
		std::cout << " est deja mort! HP: " << this->_pv << std::endl;
	else if (amount > this->_pv)
	{
		this->_pv = 0;
		std::cout << " have been OVERKILL! taking " << amount << " damage. HP: " << this->_pv << std::endl;
	}
	else
	{
		this->_pv -= amount;
		std::cout << " taking " << amount << " damage. BEEP BOOP! HP:" << this->_pv << std::endl;
	}
	return;
}

void	ClapTrap::beRepaired(unsigned int amount){
	std::cout << "ClapTrap: " << this->_name;
	if (this->_mana == 0)
	{
		std::cout << " n'a plus de batterie :(. Energie: " << this->_mana << std::endl; 
		return;
	}
	this->_mana--;
	this->_pv += amount;
	std::cout << " have been repair " << amount << " time. THANKS HUMAN :) HP:" << this->_pv << std::endl;
	return;
}
