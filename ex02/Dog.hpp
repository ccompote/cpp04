#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
	public:

		Dog();
		Dog(Dog const &);
		Dog &operator=(Dog const &);
		~Dog();

		void makeSound() const;
		void setIdeas(std::string idea);
		std::string getIdeas(int id) const;

	private:

		Brain* _dogbrain;
};

#endif