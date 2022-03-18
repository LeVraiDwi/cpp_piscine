#include "FragTrap.hpp"

FragTrap::FragTrap(std::string const & name): ClapTrap(name){
	std::cout << "Assemblage de Fragtrap: " << this->_name << " KILL HUMAN!" << std::endl; 
	this->_pv = 100;
	this->_dmg = 30;
	this->_mana = 100;
	return;
}

FragTrap::FragTrap(FragTrap const & cpy): ClapTrap(cpy){
	*this = cpy;
	std::cout <<  "Duplication de FragTrap: " << this->_name << " BETTER THAN ORIGINAL!" << std::endl;
	return;
}

FragTrap::~FragTrap(){
	std::cout << "Destruction de FragTrap: " << this->_name << " I...SHOULD...BE...ETE.R..N....a.....l" << std::endl;
	return;
}

FragTrap &	FragTrap::operator=(FragTrap const & cpy){
	this->_name = cpy._name;
	this->_pv = cpy._pv;
	this->_dmg = cpy._dmg;
	this->_mana = cpy._mana;
	return *this;
}

void	FragTrap::highFivesGuys(void){
	std::cout << "FragTrap: " << this->_name << " asking high five. What's up bro?" << std::endl;
	return;
}

void	FragTrap::attack(std::string const & target){
	std::cout << "FragTrap: " << this->_name;
	if (this->_mana == 0)
	{
		std::cout << " n'a plus de batterie :(. Energie: " << this->_mana << std::endl; 
		return;
	}
	this->_mana--;
	std::cout << " attacks " << target << ", causing " << this->_dmg << " points of damage!";
	std::cout << " Still have " << this->_mana << " energie remaining." << std::endl;
	return;
}

