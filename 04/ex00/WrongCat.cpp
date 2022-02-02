#include "WrongCat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongCat::WrongCat()
{
	this->type = "WrongCat";
	std::cout<< "WrongCat default constructor called" <<std::endl;
	return ;
}

WrongCat::WrongCat( const WrongCat & src )
{
	std::cout<< "WrongCat copy constructor called" <<std::endl;
	*this = src;
	return ;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongCat::~WrongCat()
{
	std::cout<< "WrongCat default destructor called" <<std::endl;
	return ;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongCat &				WrongCat::operator=( WrongCat const & rhs )
{
	if ( this != &rhs )
	{
		this->type = rhs.getType();
	}
	return ( *this );
}

std::ostream &			operator<<( std::ostream & o, WrongCat const & i )
{
	o << "Type = " << i.getType();
	return ( o );
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	WrongCat::makeSound( void ) const {
	std::cout<< "*WrongCat noises* OUAF OUAF OUUUUUAAAAF" <<std::endl;
	return ;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */