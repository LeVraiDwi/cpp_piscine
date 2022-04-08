#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <iostream>
# include <string>
class AMateria;
# include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string const	_type;

	public:
	AMateria(std::string const & type);
	AMateria(AMateria const & type);
	virtual ~AMateria();

	AMateria &	operator=(AMateria const & src);
	std::string const & getType() const; //Returns the materia type

	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter & target) = 0;

	private:
		AMateria();
};

#endif
