#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie{
	public:
		Zombie();
		~Zombie(void);
		void	announce(void) const;
		void	initialize(std::string name);
	private:
		std::string	name;
};

Zombie*	zombieHorde(int N, std::string name);
#endif
