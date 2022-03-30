#include "Zombie.hpp"

#define NB_ZOMB 10

int	main(){
	Zombie	*horde_rob;

	horde_rob = zombieHorde(NB_ZOMB, "rob");
	for (int i = 0; i < NB_ZOMB; i++)
	{
		horde_rob[i].announce();
	}
	delete [] horde_rob;
	return (0);
}
