#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"


class MateriaSource : public IMateriaSource
{
	private:
		AMateria *magic[4];
		int			ix_mat;

	public:
		MateriaSource();
		MateriaSource(MateriaSource const &);
		MateriaSource &operator=(MateriaSource const &);
		~MateriaSource();

		void learnMateria(AMateria *m);
		AMateria *createMateria(std::string const & type);
};

#endif