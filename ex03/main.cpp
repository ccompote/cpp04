#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "AMateria.hpp"

void subjectTest(void)
{
	std::cout << "SubjectTest start" << std::endl;
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
	std::cout << "SubjectTest end" << std::endl;
}

void	checkleaks(void)
{
	system("leaks three");
}

void    test1()
{
	std::cout << "test1 start" << std::endl;
    IMateriaSource* src = new MateriaSource();
    Character* me = new Character("me");
    Character* you = new Character("you");
    Character *bob = new Character();
    AMateria* mat;
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    mat = src->createMateria("ice");
	me->equip(mat);
	mat = src->createMateria("cure");
    me->equip(mat);
	mat = src->createMateria("beer");
	me->equip(mat);
	me->use(2,*you);
    bob->equip(mat);
    me->use(0,*you);
	me->use(1,*you);
    bob->use(0,*you);
    *bob = *me;
    me->unequip(0);
	me->unequip(3);
	me->unequip(5);
    bob->use(0,*you);
    me->use(0,*you);
	me->use(1,*you);
	me->use(5,*you);
    delete me;
    delete you;
    delete bob;
    delete src;
	std::cout << "test1 end" << std::endl;
}


int main(void)
{
    atexit(checkleaks);
    subjectTest();
    test1();
    return 0;
}