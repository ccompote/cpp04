#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "AMateria.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	ICharacter* me = new Character("me");
	// AMateria* tmp;
	// tmp = ;
	me->equip(src->createMateria("ice"));
	// tmp = src->createMateria("cure");
	me->equip(src->createMateria("cure"));
	me->equip(src->createMateria("cure"));
	// tmp = src->createMateria("cure");
	me->equip(src->createMateria("ice"));
	me->equip(src->createMateria("cure"));
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);
	me->use(4, *bob);
	delete bob;
	delete me;
	delete src;
	return 0;
}