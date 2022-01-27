#include "ClapTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ClapTrap::ClapTrap()
{
}

ClapTrap::ClapTrap( const ClapTrap & src )
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ClapTrap::~ClapTrap()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ClapTrap &				ClapTrap::operator=( ClapTrap const & rhs )
{
	return *this;
}

std::ostream &			operator<<( std::ostream & o, ClapTrap const & i )
{
	return o;
}

void			ClapTrap::attack(const std::string& target) {

}

void			ClapTrap::takeDamage(unsigned int amount) {

}

void			ClapTrap::beRepaired(unsigned int amount) {

}

