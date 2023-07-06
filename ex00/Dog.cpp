#include "Dog.hpp"

Dog::Dog() : Animal()
{
	_type = "Dog";
	std::cout << "Default constructor of Dog is called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Destructor of Dog is called" << std::endl;
}

Dog::Dog(Dog const &Dog)
{
	std::cout << "Copy constructor of Dog is called" << std::endl;
	*this = Dog;
}

Dog &Dog::operator=(Dog const &Dog)
{
	std::cout << "Copy assignment operator of Dog is called" << std::endl;
	_type = Dog._type;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Voof!" << std::endl;
}