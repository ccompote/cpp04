#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() 
{
	const Animal* meta = new Animal(); 
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl; 
	std::cout << i->getType() << " " << std::endl; 
	i->makeSound(); //will output the cat sound! 
	j->makeSound();
	meta->makeSound();

	delete(j);
	delete(i);
	delete(meta);
	const WrongAnimal* wrongmeta = new WrongAnimal(); 
	const WrongAnimal* k = new WrongCat();
	std::cout << k->getType() << " " << std::endl; 
	k->makeSound(); 
	wrongmeta->makeSound();
	const WrongCat *c = new WrongCat();
	c->makeSound();
	delete(k);
	delete(wrongmeta);
	delete(c);
	return 0; 
}