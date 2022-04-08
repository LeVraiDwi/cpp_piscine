#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;

	std::cout << "========================================perso test==============================" << std::endl;
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());

		ICharacter* me = new Character("other me");
		ICharacter* bob = new Character("bob");

		me->equip(src->createMateria("ice"));
		me->equip(src->createMateria("ice"));
		AMateria	*cure = new Cure;
		me->use(0, *bob);
		me->use(1, *bob);
		me->use(2, *bob);
		me->use(3, *bob);
		me->use(4, *bob);
		me->use(5, *bob);
		me->equip(cure);
		me->use(2, *bob);
		me->unequip(2);
		me->use(2, *bob);
		delete cure;
		delete me;
		delete bob;
		delete src;
	}
	return 0;
}
