#include "ICharacter.hpp"

ICharacter::ICharacter()
{
	_name = "Untitled";
	// std::cout << "Default constructor of ICharacter is called" << std::endl;
}

ICharacter::ICharacter(std::string name)
{
	_name = name;
	// std::cout << "Constructor with name of ICharacter is called" << std::endl;
}

ICharacter::~ICharacter()
{
	std::cout << "Destructor of ICharacter is called" << std::endl;
}

ICharacter::ICharacter(ICharacter const &ICharacter)
{
	// std::cout << "Copy constructor of ICharacter is called" << std::endl;
	*this = ICharacter;
}

ICharacter &ICharacter::operator=(ICharacter const &ICharacter)
{
	// std::cout << "Copy assignment operator of ICharacter is called" << std::endl;
	_name = ICharacter._name;
	return (*this);
}