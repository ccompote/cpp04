#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	// std::cout << "Default constructor of MateriaSource is called" << std::endl;
}

MateriaSource::~MateriaSource()
{
	// std::cout << "Destructor of MateriaSource is called" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const &MateriaSource)
{
	// std::cout << "Copy constructor of MateriaSource is called" << std::endl;
	*this = MateriaSource;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &MateriaSource)
{
	// std::cout << "Copy assignment operator of MateriaSource is called" << std::endl;
	ix_mat = MateriaSource.ix_mat;
	*magic = *MateriaSource.magic;
	return (*this);
}

void MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!magic[i])
		{
			magic[i] = m;
			ix_mat = i;
			return ;
		}
	}
}

AMateria *MateriaSource::createMateria(std::string const & type)
{
	if (magic[ix_mat]->getType() == "ice" || magic[ix_mat]->getType() == "cure")
	{
		AMateria *newone;
		if (type == "ice")
			newone = new Ice();
		else if (type == "cure")
			newone = new Cure();
		else
			return (0);
		return (newone);
	}
	else
		return (NULL);
	return NULL;
}