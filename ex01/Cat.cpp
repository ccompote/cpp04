#include "Cat.hpp"

Cat::Cat() : Animal()
{
	_type = "Cat";
	_catbrain = new Brain();
	std::cout << "Default constructor of Cat is called" << std::endl;
}

Cat::~Cat()
{
	delete(_catbrain);
	std::cout << "Destructor of Cat is called" << std::endl;
}

Cat::Cat(Cat const &Cat)
{
	std::cout << "Copy constructor of Cat is called" << std::endl;
	*this = Cat;
}

Cat &Cat::operator=(Cat const &Cat)
{
	std::cout << "Copy assignment operator of Cat is called" << std::endl;
	_type = Cat._type;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Mew!" << std::endl;
}
