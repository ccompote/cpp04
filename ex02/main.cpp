#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

// void checkleaks()
// {
// 	system("leaks one");
// }

int main() 
{

	// atexit(checkleaks);
	AAnimal *animals[6];
	// AAnimal animal;
	for (int i = 0; i < 6; i++)
	{
		if (i % 2)
		{
			animals[i] = new Cat();
			animals[i]->setIdeas("sleep");
		}
		else
		{
			animals[i] = new Dog();
			animals[i]->setIdeas("food");
		}
	}
	for (int i = 0; i < 6; i++)
	{
		animals[i]->makeSound();
		std::cout << " is thinking of " <<  animals[i]->getIdeas(1) << std::endl;
	}
	for (int i = 0; i < 6; i++)
		delete (animals[i]);
	return 0; 
}