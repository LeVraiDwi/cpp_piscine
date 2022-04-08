#include "Character.hpp"

Character::Character(): ICharacter(), _name("Jojo"){
	for (unsigned int i = 0; i < 3; i++)
		this->_materia[i] = NULL;
	return;
}

Character::Character(std::string const & src): ICharacter(), _name(src){
	for (unsigned int i = 0; i < 3; i++)
		this->_materia[i] = NULL;
	return;
}

Character::Character(Character const & src): ICharacter(), _name(src._name){
	for (unsigned int i = 0; i < 3; i++)
	{
		if (src._materia[i])
			this->_materia[i] = src._materia[i]->clone();
	}
	return;
}

Character::~Character(){
	for (unsigned int i = 0; i < 3; i++)
	{
		if (this->_materia[i])
			delete this->_materia[i];
	}
	return;
}

Character &	Character::operator=(Character const & rhs){
	if (this == &rhs)
		return *this;
	for (unsigned int i = 0; i < 3; i++)
	{
		if (this->_materia[i])
			delete this->_materia[i];
	}
	for (unsigned int i = 0; i < 3; i++)
	{
		if (rhs._materia[i])
			this->_materia[i] = rhs._materia[i]->clone();
	}
	return *this;
}

std::string const &	Character::getName() const{
	return this->_name;
}

void	Character::equip(AMateria *m){
	for (unsigned int i = 0; i < 3; i++)
	{
		if (this->_materia[i] == NULL)
		{
			this->_materia[i] = m;
			return;
		}
	}
	return;
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
		this->_materia[idx] = NULL;
	return;
}

void	Character::use(int idx, ICharacter& target){
	if (idx >= 0 && idx < 4 && this->_materia[idx])
		this->_materia[idx]->use(target);
	return;
}
