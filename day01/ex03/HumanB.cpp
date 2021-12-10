#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name("random guys"), _weapon_type(0)
{
	if (!name.empty())
		this->_name = name;
	return;
}

HumanB::~HumanB(void)
{
	return;
}

void	HumanB::setWeapon(Weapon *weapon)
{
	this->_weapon_type = weapon;
	return;
}

void	HumanB::attack(void) const
{
	std::cout << this->_name << " attacks with his ";
	if (this->_weapon_type)	
		std::cout << this->_weapon_type->getType() << std::endl;
	else
		std::cout << "bare hand" << std::endl;
	return;
}
