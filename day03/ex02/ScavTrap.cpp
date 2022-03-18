#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string const & name): ClapTrap(name){
	std::cout << "Assemblage de Scavtrap: " << this->_name << " HELLO HUMAN!" << std::endl; 
	this->_pv = 100;
	this->_dmg = 20;
	this->_mana = 50;
	return;
}

ScavTrap::ScavTrap(ScavTrap const & cpy): ClapTrap(cpy){
	*this = cpy;
	std::cout <<  "Duplication de ScavTrap: " << this->_name << " BETTER THAN ORIGINAL!" << std::endl;
	return;
}

ScavTrap::~ScavTrap(){
	std::cout << "Destruction de ScavTrap: " << this->_name << " NOoooo...." << std::endl;
	return;
}

ScavTrap &	ScavTrap::operator=(ScavTrap const & cpy){
	this->_name = cpy._name;
	this->_pv = cpy._pv;
	this->_dmg = cpy._dmg;
	this->_mana = cpy._mana;
	return *this;
}

void	ScavTrap::guardGate(void){
	std::cout << "ScavTrap: " << this->_name << " keep the gate. YOU SHOULD NOT ..... ENTER. why so disapointing o_O" << std::endl;
	return;
}

void	ScavTrap::attack(std::string const & target){
	std::cout << "ScavTrap: " << this->_name;
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

