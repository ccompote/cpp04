#include "Character.hpp"

Character::Character()
{
	_name = "Character";
	inventory = new AMateria*[4];
	for(int i = 0; i < 4; i++)
        inventory[i] = NULL;
	left = new AMateria*[1];
	amount_left = 1;
    for(int i = 0; i < amount_left; i++)
    	left[i] = NULL;
	// std::cout << "Default constructor of Character is called" << std::endl;
}

Character::Character(std::string name)
{
	_name = name;
	inventory = new AMateria*[4];
	for(int i = 0; i < 4; i++)
        inventory[i] = NULL;
	left = new AMateria*[1];
	amount_left = 1;
    for(int i = 0; i < amount_left; i++)
    	left[i] = NULL;
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
	if (left)
	{
		for (int i = 0; i < amount_left; i++)
		{
			if (left[i])
				delete left[i];
		}
		delete [] left;
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
		for(int i = 0; i < 4; i++)
       		inventory[i] = NULL;
		for (int i = 0; i < 4; i++)
		{
			if (copy.inventory[i] != NULL)
				inventory[i] = copy.inventory[i]->clone();
		}
		if (left != NULL)
		{
			for (int i = 0; i < amount_left; i++)
			{
				if (left[i])
					delete (left[i]);
			}
			delete [] left;
		}
		left = new AMateria *[copy.amount_left];
		for(int i = 0; i < copy.amount_left; i++)
       		left[i] = NULL;
		for (int i = 0; i < copy.amount_left; i++)
		{
			if (copy.left[i] != NULL)
				left[i] = copy.left[i]->clone();
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
	{
		for (int i = 0; i < 4; i++)
		{
			if (inventory[i] == m)
			{
				std::cout << "Materia is already equipped." << std::endl;
				return ;
			}
		}
		std::cout << "Materia cannot be equipped for " << _name << " because it is already equipped by someone else." << std::endl;
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
	std::cout << "Materia cannot be equipped for " << _name << std::endl;
	delete m;
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
	else
		std::cout << "Cannot unequip because the slot is empty" << std::endl;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx > 3 || idx < 0)
	{
		std::cout << _name << " cannot use the materia because of the wrong inventory index." << std::endl;
		return ;
	}
	if (inventory[idx] != NULL)
		inventory[idx]->use(target);
	else
		std::cout << _name << " cannot use the materia because of bad inventory." << std::endl;
}