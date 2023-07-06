#include "Animal.hpp"

Animal::Animal()
{
	_type = "Animal";
	std::cout << "Default constructor of Animal is called" << std::endl;
}

Animal::Animal(std::string type)
{
	std::cout << "Constructor with type of Animal is called" << std::endl;
	_type = type;
}

Animal::~Animal()
{
	std::cout << "Destructor of Animal is called" << std::endl;
}

Animal::Animal(Animal const &animal)
{
	std::cout << "Copy constructor of animal is called" << std::endl;
	*this = animal;
}

Animal &Animal::operator=(Animal const &animal)
{
	std::cout << "Copy assignment operator of Animal is called" << std::endl;
	_type = animal._type;
	return (*this);
}

std::string Animal::getType(void) const
{
	return (_type);
}

void Animal::makeSound() const
{
	std::cout << "Animal sound" << std::endl;
}