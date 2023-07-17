#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Default constructor of Brain is called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Destructor of Brain is called" << std::endl;
}

Brain::Brain(Brain const &Brain)
{
	std::cout << "Copy constructor of Brain is called" << std::endl;
	*this = Brain;
}

Brain &Brain::operator=(Brain const &Brain)
{
	std::cout << "Copy assignment operator of Brain is called" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		ideas[i] = Brain.ideas[i];
	}
	return (*this);
}