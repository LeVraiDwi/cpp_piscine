#include "Zombie.hpp"

Zombie::Zombie(std::string name){
	long unsigned int	l;

	if (name.empty())
	{
		this->name = "default";
		return;
	}
	this->name = name;
	return;
}

Zombie::~Zombie(void){
	std::cout << this->name << " a disparut" << std::endl;
	return;
}

void	Zombie::announce(void) const{
	std::cout << "<" << this->name << "> BraiiiiiiinnnzzzZ..." << std::endl;
	return;
}
