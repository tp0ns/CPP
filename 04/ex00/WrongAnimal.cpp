#include "WrongAnimal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
	std::cout<< "WrongAnimal default constructor called" <<std::endl;
	return ;
}

WrongAnimal::WrongAnimal( const WrongAnimal & src ) 
{
	std::cout<< "WrongAnimal copy constructor called" <<std::endl;
	*this = src;
	return ;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongAnimal::~WrongAnimal()
{
	std::cout<< "WrongAnimal destructor called" <<std::endl;
	return ;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongAnimal &				WrongAnimal::operator=( WrongAnimal const & rhs )
{
	if ( this != &rhs )
	{
		this->type = rhs.getType();
	}
	return ( *this );
}

std::ostream &			operator<<( std::ostream & o, WrongAnimal const & i )
{
	o << "Type = " << i.getType();
	return ( o );
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	WrongAnimal::makeSound( void ) const {
	std::cout<< "bzzz bzzz i am an wrong animal" <<std::endl;
	return ;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

const std::string&		WrongAnimal::getType( void ) const {
	return (this->type);
}

/* ************************************************************************** */