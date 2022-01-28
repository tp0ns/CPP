#include "FragTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

FragTrap::FragTrap( void ) : ClapTrap() {
	std::cout<< "FragTrap default constructor called." <<std::endl;
	this->_hitp = 100;
	this->_energyp = 100;
	this->_damage = 30;
	return ;
}

FragTrap::FragTrap( std::string name ) : ClapTrap( name ) {
	this->_hitp = 100;
	this->_energyp = 100;
	this->_damage = 30;
	std::cout<< "FragTrap name constructor called." <<std::endl;
	return ;
}

FragTrap::FragTrap( const FragTrap & src ) : ClapTrap( src )
{
	std::cout<< "FragTrap copy constructor called." <<std::endl;
	return ;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

FragTrap::~FragTrap()
{
	std::cout<< "FragTrap default destructor called." <<std::endl;
	return ;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

FragTrap &				FragTrap::operator=( FragTrap const & rhs ) {
	ClapTrap::operator=(rhs);
	return (*this);
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void					FragTrap::attack( std::string const & target ) {
	if (this->_hitp <= 0)
		std::cout<< this->_name + " is dead... LEAVE HIM ALONE ALREADY !" <<std::endl;
	else if (this->_energyp <= 0)
	{
		std::cout<< this->_name + " don't have enough energy to attack !"<<std::endl;
		return ;
	}
	std::cout<<	"FragTrap " + this->_name
			 <<	" attacks " + target
			 <<	" causing " << this->_damage
			 << " points of damage !"
			 <<std::endl;
	this->_energyp--;
}

void					FragTrap::highFiveGuys( void ) const {
	std::cout<< this->_name + " : \"Lets high five guys !!!!\"" <<std::endl;
	return ;
}

/* ************************************************************************** */