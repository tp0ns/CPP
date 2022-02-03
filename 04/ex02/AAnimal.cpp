#include "AAnimal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AAnimal::AAnimal() : type("AAnimal")
{
	std::cout<< "AAnimal default constructor called" <<std::endl;
	return ;
}

AAnimal::AAnimal( const AAnimal & src ) 
{
	std::cout<< "AAnimal copy constructor called" <<std::endl;
	*this = src;
	return ;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AAnimal::~AAnimal()
{
	std::cout<< "AAnimal destructor called" <<std::endl;
	return ;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AAnimal &				AAnimal::operator=( AAnimal const & rhs )
{
	if ( this != &rhs )
	{
		this->type = rhs.getType();
	}
	return ( *this );
}

std::ostream &			operator<<( std::ostream & o, AAnimal const & i )
{
	o << "Type = " << i.getType();
	return ( o );
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	AAnimal::makeSound( void ) const {
	std::cout<< "Makes weird AAnimal sound" <<std::endl;
	return ;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

const std::string&		AAnimal::getType( void ) const {
	return (this->type);
}

/* ************************************************************************** */