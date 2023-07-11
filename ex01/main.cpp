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
	return 0; 
}

int main( void ) 
{
 // atexit(checkleaks);
 // const Animal* j = new Dog();
 // const Animal* i = new Cat();
 // Animal* first = new Animal();
 // Cat* second = new Cat();
 // Animal* third = new Dog();
 // Animal* six;
 // Cat  fourth;
 Dog  *fifth = new Dog();
 Dog  fifth1;
 // fifth = Dog(fifth1);
 // fifth = j;
 fifth->setIdeas("food");
 fifth1 = *fifth;
 std::cout << fifth->getIdeas(2) << std::endl;
 delete fifth; 
 std::cout << fifth1.getIdeas(2) << std::endl; 
 // delete first;
 // delete second;
 // delete third;
 // delete j;
 // delete i;
 return (0);
}