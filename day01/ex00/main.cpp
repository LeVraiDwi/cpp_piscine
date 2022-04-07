#include "Zombie.hpp"

int	main(){
	Zombie	zombie = Zombie("");
	Zombie	*rob;

	rob = newZombie("rob");
	rob->announce();
	delete rob;
	zombie.announce();
	randomChump("jack");
	return (0);
}
