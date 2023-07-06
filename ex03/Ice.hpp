#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : AMateria
{
	public:

		Ice();
		Ice(Ice const &);
		Ice &operator=(Ice const &);
		~Ice();

		Ice *clone() const;
		void use(ICharacter &target);

	private:

		std::string _type;
};

#endif