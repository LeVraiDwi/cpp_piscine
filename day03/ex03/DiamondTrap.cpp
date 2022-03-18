#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string const & name): ClapTrap(name), ScavTrap(name), FragTrap(name), _name(name){
	std::cout << "Assemblage de Fragtrap: " << this->_name << " PERFECT F0RM ATIVATE!" << std::endl;
	ClapTrap::_name.append("_clap_name");
	return;
}

DiamondTrap::DiamondTrap(DiamondTrap const & cpy): ClapTrap(cpy), ScavTrap(cpy), FragTrap(cpy){
	*this = cpy;
	std::cout <<  "Duplication de DiamondTrap: " << this->_name << " ME ME ME, ME TO!" << std::endl;
	return;
}

DiamondTrap::~DiamondTrap(){
	std::cout << "Destruction de DiamondTrap: " << this->_name << " DIAMOND RETURN TO CARBON" << std::endl;
	return;
}

DiamondTrap &	DiamondTrap::operator=(DiamondTrap const & cpy){
	this->_name = cpy._name;
	this->_pv = cpy._pv;
	this->_dmg = cpy._dmg;
	this->_mana = cpy._mana;

	return *this;
}

void	DiamondTrap::whoAmI(void){
	std::cout << "I AM DIAMONDTRAP: " << this->_name << ". " << ClapTrap::_name << " IN BETTER." << std::endl;
}
