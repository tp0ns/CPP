#include "Animal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Animal::Animal() : type("Animal")
{
	std::cout<< "Animal default constructor called" <<std::endl;
	return ;
}

Animal::Animal( const Animal & src ) 
{
	std::cout<< "Animal copy constructor called" <<std::endl;
	*this = src;
	return ;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Animal::~Animal()
{
	std::cout<< "Animal destructor called" <<std::endl;
	return ;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Animal &				Animal::operator=( Animal const & rhs )
{
	if ( this != &rhs )
	{
		this->type = rhs.getType();
	}
	return ( *this );
}

std::ostream &			operator<<( std::ostream & o, Animal const & i )
{
	o << "Type = " << i.getType();
	return ( o );
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	Animal::makeSound( void ) const {
	std::cout<< "Makes weird animal sound" <<std::endl;
	return ;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

const std::string&		Animal::getType( void ) const {
	return (this->type);
}

/* ************************************************************************** */