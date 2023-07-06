#include "AMateria.hpp"

AMateria::AMateria()
{
	_type = "Untitled";
	// std::cout << "Default constructor of AMateria is called" << std::endl;
}

AMateria::AMateria(std::string &type)
{
	// std::cout << "Constructor with type of AMateria is called" << std::endl;
	_type = type;
}

AMateria::~AMateria()
{
	// std::cout << "Destructor of AMateria is called" << std::endl;
}

AMateria::AMateria(AMateria const &AMateria)
{
	// std::cout << "Copy constructor of AMateria is called" << std::endl;
	*this = AMateria;
}

AMateria &AMateria::operator=(AMateria const &AMateria)
{
	// std::cout << "Copy assignment operator of AMateria is called" << std::endl;
	_type = AMateria._type;
	return (*this);
}

std::string const &AMateria::getType(void) const
{
	return (_type);
}

