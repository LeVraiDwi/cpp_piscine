#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	//HumanA
	Weapon club = Weapon("crude spiked club");
	HumanA bob("Bob", club);
	bob.attack();
	club.setType("some other type of club");
	bob.attack();
	//humanB
	Weapon club_autre = Weapon("crude spiked club");
	HumanB jim("Jim");
	jim.setWeapon(&club_autre);
	jim.attack();
	club_autre.setType("some other type of club");
	jim.attack();
	return (0);
}
