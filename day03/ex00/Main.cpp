#include "ClapTrap.hpp"

int	main(){
	ClapTrap	kev("K3V1N");
	ClapTrap	marv("M4RV1N");
	ClapTrap	new_marv(marv);
	
	kev.attack("M4RV1N");
	marv.beRepaired(122);
	kev.takeDamage(12);
	kev.beRepaired(0);
	new_marv.attack("M4RV1N");
	marv.takeDamage(10);
	marv.attack("Creator");
	marv.takeDamage(10);
	new_marv = marv;

	marv.beRepaired(122);
	marv.beRepaired(122);
	marv.beRepaired(122);
	marv.beRepaired(122);
	marv.beRepaired(122);
	marv.beRepaired(122);
	marv.beRepaired(122);
	marv.beRepaired(122);
	marv.beRepaired(122);
	new_marv.beRepaired(0);
	return (1);
}
