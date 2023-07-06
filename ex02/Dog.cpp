#include "Dog.hpp"

Dog::Dog() : AAnimal()
{
	_type = "Dog";
	_dogbrain = new Brain();
	std::cout << "Default constructor of Dog is called" << std::endl;
}

Dog::~Dog()
{
	delete(_dogbrain);
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
	std::cout << "Voof!";
}

void Dog::setIdeas(std::string idea)
{
	for (int i = 0; i < 100; i++)
		_dogbrain->ideas[i] = idea;
}

std::string Dog::getIdeas(int id) const
{
	return (_dogbrain->ideas[id]);
}