#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:

		WrongCat();
		WrongCat(WrongCat const &old);
		WrongCat& operator=(const WrongCat& old);
		~WrongCat();

		void	makeSound() const;
};

#endif