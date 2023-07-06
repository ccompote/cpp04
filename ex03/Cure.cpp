#include "Cure.hpp"

Cure::Cure() : AMateria()
{
	_type = "Cure";
	// std::cout << "Default constructor of Cure is called" << std::endl;
}

Cure::~Cure()
{
	std::cout << "Destructor of Cure is called" << std::endl;
}

Cure::Cure(Cure const &Cure)
{
	// std::cout << "Copy constructor of Cure is called" << std::endl;
	*this = Cure;
}

Cure &Cure::operator=(Cure const &Cure)
{
	// std::cout << "Copy assignment operator of Cure is called" << std::endl;
	_type = Cure._type;
	return (*this);
}

Cure *Cure::clone() const
{
	Cure *newcure;
	return (newcure);
}

void use(ICharacter &target)
{
	std::cout << "* heals" << ICharacter._getName() << "'s wounds *" << std::endl;
}