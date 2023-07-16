#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	magic = new AMateria *[4];
	for(int i = 0; i < 4; i++)
        magic[i] = NULL;
	// std::cout << "Default constructor of MateriaSource is called" << std::endl;
}

MateriaSource::~MateriaSource()
{
	if (magic)
	{
		for (int i = 0; i < 4; i++)
		{
			if (magic[i])
				delete magic[i];
		}
		delete [] magic;
	}
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
	if (magic != NULL)
	{
		for (int i = 0; i < 4; i++)
		{
			if (magic[i] != NULL)
				delete magic[i];
		}
		delete [] magic;
	}
	magic = new AMateria *[4];
	for(int i = 0; i < 4; i++)
		magic[i] = NULL;
	for (int i = 0; i < 4; i++)
	{
		if (MateriaSource.magic[i] != NULL)
			magic[i] = MateriaSource.magic[i]->clone();
	}
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
	delete m;
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