#include "Weapon.hpp"

Weapon::Weapon(std::string type): type("bare hand")
{
	if (!type.empty())
		this->type = type;
	return;
}

Weapon::~Weapon(void)
{
	return;
}

std::string const &	Weapon::getType(void)
{
	return (this->type);
}

void	Weapon::setType(std::string type)
{
	this->type = type;
	return;
}
