#include "Character.hpp"

Character::Character()
{
	_name = "Character";
	inventory = new AMateria*[4];
	amount_left = 1;
	left = new AMateria*[1];
	// std::cout << "Default constructor of Character is called" << std::endl;
}

Character::Character(std::string name)
{
	_name = name;
	inventory = new AMateria*[4];
	amount_left = 1;
	left = new AMateria*[1];
	// std::cout << "Constructor with name of Character is called" << std::endl;
}

Character::~Character()
{
	if (inventory)
	{
		for (int i = 0; i < 4; i++)
		{
			if (inventory[i])
				delete inventory[i];
		}
		delete [] inventory;
	}
	// std::cout << "Destructor of Character is called" << std::endl;
}

Character::Character(Character const &Character)
{
	// std::cout << "Copy constructor of Character is called" << std::endl;
	*this = Character;
}

Character &Character::operator=(Character const &copy)
{
	// std::cout << "Copy assignment operator of Character is called" << std::endl;
	if (this != &copy)
	{
		_name = copy._name;
		if (inventory != NULL)
		{
			for (int i = 0; i < 4; i++)
			{
				if (inventory[i])
					delete (inventory[i]);
			}
			delete [] inventory;
		}
		inventory = new AMateria *[4];
		for (int i = 0; i < 4; i++)
		{
			if (copy.inventory[i] != NULL)
				inventory[i] = copy.inventory[i]->clone();
		}

	}
	return (*this);
}

std::string const &Character::getName() const
{
	return (_name);
}

void Character::equip(AMateria* m)
{
	if (!m)
		return ;
	if (m->is_equipped())
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i] == m)
			return ;
	}
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i] == NULL)
		{
			m->set_equipped();
			inventory[i] = m;
			return ;
		}
	}
	// delete m;
}

void Character::unequip(int idx)
{
	if (idx > 3 || idx < 0)
	{
		std::cout << "Index " << idx << " is wrong for unequip function" << std::endl;
		return ;
	}
	if (inventory[idx] != NULL)
	{
		AMateria **tmp;
		tmp = left;
		left = new AMateria *[amount_left + 1];
		for (int i = 0; i < amount_left; i++)
			left[i] = tmp[i];
		amount_left++;
		left[amount_left - 1] = inventory[idx];
		inventory[idx] = NULL;
		delete [] tmp;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx > 3 || idx < 0)
	{
		std::cout << "Index " << idx << " is wrong for use function" << std::endl;
		return ;
	}
	if (inventory[idx])
		inventory[idx]->use(target);
}