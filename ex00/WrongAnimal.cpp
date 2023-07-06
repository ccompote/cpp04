#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	_type = "WrongAnimal";
	std::cout << "Default constructor of WrongAnimal is called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
{
	std::cout << "Constructor with type of WrongAnimal is called" << std::endl;
	_type = type;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructor of WrongAnimal is called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &WrongAnimal)
{
	std::cout << "Copy constructor of WrongAnimal is called" << std::endl;
	*this = WrongAnimal;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &WrongAnimal)
{
	std::cout << "Copy assignment operator of WrongAnimal is called" << std::endl;
	_type = WrongAnimal._type;
	return (*this);
}

std::string WrongAnimal::getType(void) const
{
	return (_type);
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal sound" << std::endl;
}