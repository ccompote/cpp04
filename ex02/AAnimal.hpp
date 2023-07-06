#ifndef AAnimal_HPP
#define AAnimal_HPP

#include <string>
#include <iostream>

class AAnimal
{
	protected:
		
		std::string _type;

	public:

		AAnimal();
		AAnimal(std::string type);
		AAnimal(AAnimal const &);
		AAnimal &operator=(AAnimal const &);
		virtual ~AAnimal();

		virtual void makeSound() const = 0;
		virtual void setIdeas(std::string idea) = 0;
		virtual std::string getIdeas(int id) const = 0;
		std::string getType(void) const;
};

#endif