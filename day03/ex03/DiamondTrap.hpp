#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap{
	public:
		DiamondTrap(std::string const & name);
		DiamondTrap(DiamondTrap const & cpy);
		~DiamondTrap();
		DiamondTrap &	operator=(DiamondTrap const & cpy);
		void	whoAmI(void);
		using	ScavTrap::attack;

	private:
		std::string	_name;
		using FragTrap::_pv;
		using FragTrap::_dmg;
		using ScavTrap::_mana;

};

#endif
