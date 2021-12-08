#include "Zombie.hpp"

Zombie::Zombie(): name("default"){
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

void	Zombie::initialize(std::string name){
	if (!name.empty())
		this->name = name;
	return;
}
