#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal
{
	protected:
		
		std::string _type;

	public:

		Animal();
		Animal(std::string type);
		Animal(Animal const &);
		Animal &operator=(Animal const &);
		virtual ~Animal();

		virtual void makeSound() const;
		virtual void setIdeas(std::string idea) = 0;
		virtual std::string getIdeas(int id) const = 0;
		std::string getType(void) const;
};

#endif