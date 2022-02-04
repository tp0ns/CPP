#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : public ICharacter
{
	public:
		Character( std::string name );
		Character( Character const & src );
		~Character();

		Character &		operator=( Character const & rhs );

		std::string const &	getName( void ) const;
		AMateria*			getItem( int i) const;
		void 				equip(AMateria *m);
		void 				unequip(int idx);
		void 				use(int idx, ICharacter &target);

	private:
		Character();
		std::string _name;
		AMateria *_inventory[4];
};

#endif /* ******************************************************* CHARACTER_H */