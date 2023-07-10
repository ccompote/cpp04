#include "Character.hpp"

Character::Character()
{
	_name = "Character";

	// std::cout << "Default constructor of Character is called" << std::endl;
}

Character::Character(std::string name)
{
	_name = name;
	// std::cout << "Constructor with name of Character is called" << std::endl;
}

Character::~Character()
{
	// std::cout << "Destructor of Character is called" << std::endl;
}

Character::Character(Character const &Character)
{
	// std::cout << "Copy constructor of Character is called" << std::endl;
	*this = Character;
}

Character &Character::operator=(Character const &Character)
{
	// std::cout << "Copy assignment operator of Character is called" << std::endl;
	if (this != &Character)
		_name = Character._name;
	return (*this);
}

std::string const &Character::getName() const
{
	return (_name);
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!inventory[i])
		{
			inventory[i] = m;
			return ;
		}
	}
}

void Character::unequip(int idx)
{
	inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (inventory[idx])
		inventory[idx]->use(target);
}