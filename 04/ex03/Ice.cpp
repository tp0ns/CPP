#include "Ice.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Ice::Ice()
{
	this->_type = "ice";
	return ;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Ice::~Ice()
{
	return ;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

std::ostream &			operator<<( std::ostream & o, Ice const & i )
{
	o << "Type = " << i.getType();
	return (o);
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	Ice::use(ICharacter& target) {
	std::cout<< "* shoots an ice bolt at " + target.getName() + " *" <<std::endl;
}

AMateria*	Ice::clone( void ) const {
	return (new Ice());
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */