#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog()
{
	this->type = "Dog";
	std::cout<< "Dog default constructor called" <<std::endl;
	return ;
}

Dog::Dog( const Dog & src )
{
	std::cout<< "Dog copy constructor called" <<std::endl;
	*this = src;
	return ;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog()
{
	std::cout<< "Dog default destructor called" <<std::endl;
	return ;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog &				Dog::operator=( Dog const & rhs )
{
	if ( this != &rhs )
	{
		this->type = rhs.getType();
	}
	return ( *this );
}

std::ostream &			operator<<( std::ostream & o, Dog const & i )
{
	o << "Type = " << i.getType();
	return ( o );
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	Dog::makeSound( void ) const {
	std::cout<< "*Dog noises* Ouaf ouaf ouaf" <<std::endl;
	return ;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */