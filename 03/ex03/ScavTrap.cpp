#include "ScavTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ScavTrap::ScavTrap( void ) : ClapTrap() {
	std::cout<< "ScavTrap default constructor called." <<std::endl;
	this->_hitp = 100;
	this->_energyp = 50;
	this->_damage = 20;
	return ;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap( name ) {
	this->_hitp = 100;
	this->_energyp = 50;
	this->_damage = 20;
	std::cout<< "ScavTrap name constructor called." <<std::endl;
	return ;
}

ScavTrap::ScavTrap( const ScavTrap & src ) : ClapTrap( src )
{
	std::cout<< "ScavTrap copy constructor called." <<std::endl;
	return ;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ScavTrap::~ScavTrap()
{
	std::cout<< "ScavTrap default destructor called." <<std::endl;
	return ;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ScavTrap &				ScavTrap::operator=( ScavTrap const & rhs ) {
	ClapTrap::operator=(rhs);
	return (*this);
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void					ScavTrap::attack( std::string const & target ) {
	if (this->_hitp <= 0)
		std::cout<< this->_name + " is dead... LEAVE HIM ALONE ALREADY !" <<std::endl;
	else if (this->_energyp <= 0)
	{
		std::cout<< this->_name + " don't have enough energy to attack !"<<std::endl;
		return ;
	}
	std::cout<<	"ScavTrap " + this->_name
			 <<	" attacks " + target
			 <<	" causing " << this->_damage
			 << " points of damage !"
			 <<std::endl;
	this->_energyp--;
}

void					ScavTrap::guardGate( void ) const {
	std::cout<< this->_name + " is now guarding the gate" <<std::endl;
	return ;
}

/* ************************************************************************** */