#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	public:

		Cat();
		Cat(Cat const &);
		Cat &operator=(Cat const &);
		~Cat();

		void makeSound() const;
		void setIdeas(std::string idea);
		std::string getIdeas(int id) const;
	private:

		Brain* _catbrain;
};

#endif