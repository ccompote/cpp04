#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal
{
	protected:
		
		std::string _type;

	public:

		WrongAnimal();
		WrongAnimal(std::string type);
		WrongAnimal(WrongAnimal const &);
		WrongAnimal &operator=(WrongAnimal const &);
		~WrongAnimal();

		void makeSound() const;
		std::string getType(void) const;
};

#endif