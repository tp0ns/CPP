#include "AMateria.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AMateria::AMateria()
{
	this->_type = "Default";
	return ;
}

AMateria::AMateria(std::string const & type) : _type(type)
{
	return ;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AMateria::~AMateria()
{
	return ;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AMateria &				AMateria::operator=(AMateria const & rhs) {
	if (this != &rhs)
	{
		this->_type = rhs.getType();
	}
	return ;
}

std::ostream &			operator<<( std::ostream & o, AMateria const & i )
{
	o << "Type = " << i.getType();
	return (o);
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	AMateria::use(ICharacter& target) {
	std::cout<< "AMateria::use function has been called" <<std::endl;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const &	AMateria::getType( void ) const {
	return (this->_type);
}

/* ************************************************************************** */