#include "Zombie.hpp"

int	main(){
	Zombie	zombie = Zombie("");
	Zombie	*rob;

	rob = newZombie("rob");
	rob->announce();
	zombie.announce();
	randomChump("jack");
	delete rob;
	return (0);
}
