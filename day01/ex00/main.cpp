#include "Zombie.hpp"

int	main(){
	Zombie	zombie = Zombie("");
	Zombie	*rob;

	rob = newZombie("rob");
	zombie.announce();
	randomChump("jack");
	delete rob;
	return (0);
}
