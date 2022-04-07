#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
#include <iostream>

class ClapTrap{
	public:
		ClapTrap();
		ClapTrap(std::string const & name);
		ClapTrap(ClapTrap const & cpy);
		~ClapTrap();

		ClapTrap &	operator=(ClapTrap const & rhs);
		void		attack(const std::string & target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);

	private:
		std::string		_name;
		unsigned int		_pv;
		unsigned int		_mana;
		unsigned int		_dmg;
};

#endif
