#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(){
	ClapTrap	kev("K3V1N");
	ScavTrap	marv("M4RV1N");
	ScavTrap	new_marv(marv);
	FragTrap	nono("N0N0");
	FragTrap	new_nono(nono);
	DiamondTrap	tim("71M");
	DiamondTrap	new_tim(tim);
	DiamondTrap	def;
	
	kev.attack("M4RV1N");
	marv.beRepaired(122);
	kev.takeDamage(12);
	kev.beRepaired(0);
	marv.guardGate();
	new_marv.attack("M4RV1N");
	marv.takeDamage(10);
	marv.attack("Creator");
	marv.takeDamage(10);
	nono.takeDamage(50);
	new_nono = nono;
	nono.attack("people stupid enought to make war");
	new_nono.highFivesGuys();
	new_nono.takeDamage(1);
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

	std::cout << "============================test diamond=======================================" << std::endl;
	tim.attack("namek");
	tim.takeDamage(200);
	tim.whoAmI();
	new_tim.beRepaired(25);
	new_tim = tim;
	new_tim.takeDamage(5);
	return (1);
}
