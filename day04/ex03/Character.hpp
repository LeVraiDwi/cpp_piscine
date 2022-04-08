#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include <iostream>
# include <string>
# include "ICharacter.hpp"
# include "Character.hpp"

class Character: public ICharacter{
	public:
		Character();
		Character(std::string const & name);
		Character(Character const & src);
		virtual	~Character();
		
		Character &			operator=(Character const & rhs);
		std::string const &	getName() const;
		void				equip(AMateria *m);
		void				unequip(int idx);
		void				use(int idx, ICharacter& target);

	private:
		AMateria			*_materia[4];
		std::string	const 	_name;
};
#endif
