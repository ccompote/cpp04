#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "AAnimal.hpp"

class Brain
{
	public:

		Brain();
		Brain(Brain const &);
		Brain &operator=(Brain const &);
		~Brain();
		
		std::string ideas[100];
};

#endif