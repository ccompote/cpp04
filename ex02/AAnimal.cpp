#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	_type = "AAnimal";
	std::cout << "Default constructor of AAnimal is called" << std::endl;
}

AAnimal::AAnimal(std::string type)
{
	std::cout << "Constructor with type of AAnimal is called" << std::endl;
	_type = type;
}

AAnimal::~AAnimal()
{
	std::cout << "Destructor of AAnimal is called" << std::endl;
}

AAnimal::AAnimal(AAnimal const &AAnimal)
{
	std::cout << "Copy constructor of AAnimal is called" << std::endl;
	*this = AAnimal;
}

AAnimal &AAnimal::operator=(AAnimal const &AAnimal)
{
	std::cout << "Copy assignment operator of AAnimal is called" << std::endl;
	_type = AAnimal._type;
	return (*this);
}

std::string AAnimal::getType(void) const
{
	return (_type);
}

void AAnimal::makeSound() const
{
	std::cout << "AAnimal sound" << std::endl;
}