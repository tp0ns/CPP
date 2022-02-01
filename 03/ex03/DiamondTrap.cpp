#include "DiamondTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

DiamondTrap::DiamondTrap( void ) : _name("Default") {
	std::cout<< "DiamondTrap default constructor called." <<std::endl;
	this->ClapTrap::_name = _name + "_clap_name";
	this->_hitp = this->FragTrap::_hitp;
	this->_energyp = this->ScavTrap::_energyp;
	this->_damage = this->FragTrap::_damage;
	return ;
}

DiamondTrap::DiamondTrap( std::string name ) : _name(name) {
	std::cout<< "DiamondTrap name constructor called." <<std::endl;
	this->ClapTrap::_name = _name + "_clap_name";
	this->_hitp = this->FragTrap::_hitp;
	this->_energyp = this->ScavTrap::_energyp;
	this->_damage = this->FragTrap::_damage;
	return ;
}

DiamondTrap::DiamondTrap( const DiamondTrap & src ) {
	*this = src;
	std::cout<< "DiamondTrap copy constructor called." <<std::endl;
	return ;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

DiamondTrap::~DiamondTrap()
{
	std::cout<< "DiamondTrap default destructor called." <<std::endl;
	return ;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

DiamondTrap &				DiamondTrap::operator=( DiamondTrap const & rhs ) {
	ClapTrap::operator=(rhs);
	return (*this);
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void					DiamondTrap::attack( std::string const & target ) {
	this->ScavTrap::attack(target);
}

void					DiamondTrap::whoAmI( void ) const {
	std::cout<<	"My ClapTrap name is : " << this->ClapTrap::_name
			<<	" and my DiamondTrap name is " + this->_name <<std::endl;
}

/* ************************************************************************** */