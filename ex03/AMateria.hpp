#ifndef AMateria_HPP
#define AMateria_HPP

#include <string>
#include <iostream>

#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		
		std::string _type;
		bool 		_equipped;

	public:

		AMateria();
		AMateria(std::string const &type);
		AMateria(AMateria const &);
		AMateria &operator=(AMateria const &);
		AMateria *operator=(AMateria *AMateria);
		virtual ~AMateria();

		std::string const &getType() const;
		virtual AMateria *clone() const = 0;
		virtual void use(ICharacter& target);
		bool is_equipped(void) const;
		void set_equipped(void);
};

#endif