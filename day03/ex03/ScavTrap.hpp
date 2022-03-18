#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap{
	public:
		ScavTrap(std::string const & name);
		ScavTrap(ScavTrap const & cpy);
		~ScavTrap();
		ScavTrap &	operator=(ScavTrap const & cpy);

		void	guardGate(void);
		void	attack(std::string const & target);

	private:

};

#endif
