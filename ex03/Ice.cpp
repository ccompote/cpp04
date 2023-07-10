#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	// std::cout << "Default constructor of Ice is called" << std::endl;
}

Ice::~Ice()
{
	std::cout << "Destructor of Ice is called" << std::endl;
}

Ice::Ice(Ice const &Ice) : AMateria("ice")
{
	_type = Ice._type;
	// std::cout << "Copy constructor of Ice is called" << std::endl;
	*this = Ice;
}

Ice &Ice::operator=(Ice const &Ice)
{
	// std::cout << "Copy assignment operator of Ice is called" << std::endl;
	_type = Ice._type;
	return (*this);
}

AMateria *Ice::clone() const
{
	AMateria *newice = new Ice();
	return (newice);
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

