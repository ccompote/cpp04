#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	// std::cout << "Default constructor of Cure is called" << std::endl;
}

Cure::~Cure()
{
	// std::cout << "Destructor of Cure is called" << std::endl;
}

Cure::Cure(Cure const &Cure) : AMateria("cure")
{
	// std::cout << "Copy constructor of Cure is called" << std::endl;
	*this = Cure;
}

Cure &Cure::operator=(Cure const &Cure)
{
	// std::cout << "Copy assignment operator of Cure is called" << std::endl;
	_type = Cure._type;
	_equipped = Cure.is_equipped();
	return (*this);
}

AMateria *Cure::clone() const
{
	AMateria *newcure = new Cure();
	return (newcure);
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
