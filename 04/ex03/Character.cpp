#include "Character.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Character::Character() {
	return ;
}

Character::Character( std::string name) : _name(name) {
	for( int i = 0; i < 4; i++)
		_inventory[i] = NULL;
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
	delete [] this->_inventory;
	return ;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Character &				Character::operator=( Character const & rhs ) {
	if ( this != &rhs )
	{
		AMateria**	newInventory = rhs.getInventory();
		this->_name = rhs.getName();
		for (int i = 0; i < 4; i++)
		{
			if (this->_inventory[i] != NULL)
				delete this->_inventory[i];
			if (newInventory[i] != NULL)
				this->_inventory[i] = newInventory[i]->clone();
			else
				this->_inventory[i] = NULL;
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
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			break ;
		}
	}
	return ;
}

void	Character::unequip(int idx) {
	if (this->_inventory[idx] != NULL && idx > 0 && idx < 4)
		this->_inventory[idx] = NULL;
	else
		std::cout<< "Can't unequip an empty or inexisting _inventory slot." <<std::endl;
}

void	Character::use(int idx, ICharacter &target) {
	if (this->_inventory[idx] != NULL && idx > 0 && idx < 4)
		this->_inventory[idx]->use(target);
	else
		std::cout<< "You can't use an empty or inexisting _inventory slot." <<std::endl;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const &	Character::getName( void ) const {
	return (this->_name);
}

AMateria**	Character::getInventory( void ) const {
	return (this->_inventory);
}

/* ************************************************************************** */