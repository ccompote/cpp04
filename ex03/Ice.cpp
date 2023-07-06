#include "Ice.hpp"

Ice::Ice() : AMateria()
{
	_type = "ice";
	// std::cout << "Default constructor of Ice is called" << std::endl;
}

Ice::~Ice()
{
	std::cout << "Destructor of Ice is called" << std::endl;
}

Ice::Ice(Ice const &Ice)
{
	// std::cout << "Copy constructor of Ice is called" << std::endl;
	*this = Ice;
}

Ice &Ice::operator=(Ice const &Ice)
{
	// std::cout << "Copy assignment operator of Ice is called" << std::endl;
	_type = Ice._type;
	return (*this);
}

Ice *Ice::clone() const
{
	Ice *newice;
	return (newice);
}

void use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << ICharacter._getName() << " *" << std::endl;
}