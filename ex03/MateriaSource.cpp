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
		if (magic[i] == NULL)
		{
			magic[i] = m;
			ix_mat = i;
			return ;
		}
	}
}

AMateria *MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (magic[i] != NULL && magic[i]->getType() == type)
			return (magic[i]->clone());
	}
	return (NULL);
}