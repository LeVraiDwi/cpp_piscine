#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon weapon): _name("random guys"), _weapon_type(weapon)
{
	if (!name.empty())
		this->_name = name;
	return;
}

HumanA::~HumanA(void)
{
	return;
}

void	HumanA::attack(void) const
{
	std::cout << this->_name << " attacks with his " << this->_weapon_type.getType() << std::endl;
	return;
}
