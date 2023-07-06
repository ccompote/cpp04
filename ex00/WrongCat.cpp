#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	_type = "WrongCat";
	std::cout << "Default constructor of WrongCat is called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "Destructor of WrongCat is called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &WrongCat)
{
	std::cout << "Copy constructor of WrongCat is called" << std::endl;
	*this = WrongCat;
}

WrongCat &WrongCat::operator=(WrongCat const &WrongCat)
{
	std::cout << "Copy assignment operator of WrongCat is called" << std::endl;
	_type = WrongCat._type;
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "Mew!" << std::endl;
}
