#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

// void checkleaks()
// {
// 	system("leaks one");
// }

int main() 
{

	// atexit(checkleaks);
	Animal *animals[6];
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
		std::cout << animals[i]->getType() << " is thinking of " <<  animals[i]->getIdeas(1) << std::endl;
	for (int i = 0; i < 6; i++)
		delete (animals[i]);
	Cat basic;
	basic.setIdeas("food");
	{
		Cat tmp = basic;
	}
	std::cout << basic.getIdeas(1) << std::endl;
	return 0; 
}
