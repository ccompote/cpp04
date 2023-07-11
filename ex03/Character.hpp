#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
	private:

		std::string _name;
		AMateria **inventory;
		AMateria **left;
		int		amount_left;

	public: 
		Character();
		Character(std::string name);
		Character(Character const &);
		Character &operator=(Character const &);
		~Character();

		std::string const &getName() const;
		void equip(AMateria* m) ;
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif