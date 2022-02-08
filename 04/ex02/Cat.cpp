#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat()
{
	this->type = "Cat";
	std::cout<< "Cat default constructor called" <<std::endl;
	this->brain = new Brain();
	return ;
}

Cat::Cat( const Cat & src )
{
	std::cout<< "Cat copy constructor called" <<std::endl;
	*this = src;
	return ;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat()
{
	std::cout<< "Cat default destructor called" <<std::endl;
	delete this->brain;
	return ;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat &				Cat::operator=( Cat const & rhs )
{
	if ( this != &rhs )
	{
		this->type = rhs.getType();
		delete this->brain;
		this->brain = new Brain(*rhs.getBrain());
	}
	return ( *this );
}

std::ostream &			operator<<( std::ostream & o, Cat const & i )
{
	o << "Type = " << i.getType();
	return ( o );
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	Cat::makeSound( void ) const {
	std::cout<< "*Cat noises* Meow meow meow" <<std::endl;
	return ;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

Brain*	Cat::getBrain( void ) const {
	return (this->brain);
}

/* ************************************************************************** */