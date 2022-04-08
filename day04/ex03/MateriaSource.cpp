#include "MateriaSource.hpp"

MateriaSource::MateriaSource(): IMateriaSource(){
	for (unsigned int i = 0; i < 4; i++)
		this->_materia[i] = NULL;
	return;
}

MateriaSource::MateriaSource(MateriaSource const & src): IMateriaSource(){
	for (unsigned int i = 0; i < 4; i++)
	{
		if (src._materia[i])
			this->_materia[i] = src._materia[i]->clone();
	}
	return;
}

MateriaSource::~MateriaSource(){
	for (unsigned int i = 0; i < 4; i++)
	{
		if (this->_materia[i])
			delete this->_materia[i];
	}
	return;
}

MateriaSource &	MateriaSource::operator=(MateriaSource const & rhs){
	if (this == &rhs)
		return *this;
	for (unsigned int i = 0; i < 4; i++)
	{
		if (this->_materia[i])
			delete this->_materia[i];
	}
	for (unsigned int i = 0; i < 4; i++)
	{
		if (rhs._materia[i])
			this->_materia[i] = rhs._materia[i]->clone();
	}
	return *this;
}

void	MateriaSource::learnMateria(AMateria *m){
	for (unsigned int i = 0; i < 4; i++)
	{
		if (this->_materia[i] == NULL)
		{
			this->_materia[i] = m;
			return;
		}
	}
	return;
}

AMateria	*MateriaSource::createMateria(std::string const & type){
	for (unsigned int i = 0; i < 4; i++)
	{
		
		if (!(this->_materia[i]->getType()).compare(type))
			return this->_materia[i]->clone();
	}
	return NULL;
}
