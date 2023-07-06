#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : AMateria
{
	public:

		Cure();
		Cure(Cure const &);
		Cure &operator=(Cure const &);
		~Cure();

		Cure *clone() const;
	private:

		std::string _type;
};

#endif