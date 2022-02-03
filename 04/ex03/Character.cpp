#include "Character.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Character::Character() {
	return ;
}

Character::Character( std::string name) : _name(name) {
	for( int i = 0; i < 4; i++)
		inventory[i] = NULL;
	return ;
}

Character::Character( const Character & src ) {
	*this = src;
	return ;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Character::~Character() {
	delete [] this->inventory;
	return ;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Character &				Character::operator=( Character const & rhs ) {
	if ( this != &rhs )
	{
		this->_name = rhs.getName();
		for (int i = 0; i < 4; i++)
		{
			if (this->inventory[i] != NULL)
				delete this->inventory[i];
			if (rhs.inventory[i] != NULL)
				this->inventory[i] = rhs.inventory[i]->clone();
			else
				this->inventory[i] = NULL;
		}
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	Character::equip(AMateria *m) {
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] == NULL)
		{
			this->inventory[i] = m;
			break ;
		}
	}
	return ;
}

void	Character::unequip(int idx) {
	if (this->inventory[idx] != NULL && idx > 0 && idx < 4)
		this->inventory[idx] = NULL;
	else
		std::cout<< "Can't unequip an empty or inexisting inventory slot." <<std::endl;
}

void	Character::use(int idx, ICharacter &target) {
	if (this->inventory[idx] != NULL && idx > 0 && idx < 4)
		this->inventory[idx]->use(target);
	else
		std::cout<< "You can't use an empty or inexisting inventory slot." <<std::endl;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const &	Character::getName( void ) const {
	return (this->_name);
}

/* ************************************************************************** */