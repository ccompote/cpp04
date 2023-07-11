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
	*_catbrain = *Cat._catbrain;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Mew!" << std::endl;
}

void Cat::setIdeas(std::string idea)
{
	for (int i = 0; i < 100; i++)
		_catbrain->ideas[i] = idea;
}

std::string Cat::getIdeas(int id) const
{
	return (_catbrain->ideas[id]);
}