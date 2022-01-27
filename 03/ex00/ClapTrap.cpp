#include "ClapTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ClapTrap::ClapTrap() : _name("Default"), _hitp(10), _energyp(10), _damage(0) {
	std::cout<< this->_name + " spawned." <<std::endl;
	return ;
}

ClapTrap::ClapTrap( std::string name) : _name(name), _hitp(10), _energyp(10), _damage(0) {
	std::cout<< this->_name + " spawned." <<std::endl;
	return ;
}

ClapTrap::ClapTrap( const ClapTrap & src )
{
	*this = src;
	std::cout<< this->_name + " spawned using copy" <<std::endl;
	return ;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ClapTrap::~ClapTrap()
{
	std::cout << this->_name + " destroyed itself..." <<std::endl;
	return ;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ClapTrap &				ClapTrap::operator=( ClapTrap const & rhs )
{
	this->_name = rhs.getName();
	this->_hitp = rhs.getHitp();
	this->_energyp = rhs.getEnergyp();
	this->_damage = rhs.getDamage();
	return (*this);
}

std::ostream &			operator<<( std::ostream & o, ClapTrap const & i )
{
	o << i.getName();
	return (o);
}

/*
** ------------------------------ OTHER FUNCTIONS -----------------------------
*/

void			ClapTrap::attack(const std::string& target) {
	if (this->_hitp <= 0)
		std::cout<< this->_name + " is dead... LEAVE HIM ALONE ALREADY !" <<std::endl;
	else if (this->_energyp <= 0)
	{
		std::cout<< this->_name + " don't have enough energy to attack !"<<std::endl;
		return ;
	}
	std::cout<<	"Claptrap " + this->_name
			 <<	" attacks " + target
			 <<	" causing " << this->_damage
			 << " points of damage !"
			 <<std::endl;
	this->_energyp--;
}

void			ClapTrap::takeDamage(unsigned int amount) {
	if (this->_hitp <= 0)
		std::cout<< this->_name + " is dead... LEAVE HIM ALONE ALREADY !" <<std::endl;
	else
	{
		this->_hitp -= amount;
		if ( this->_hitp < 0)
			this->_hitp = 0;
		std::cout<< this->_name << " just took " << amount << " damage ! "
				<< "He now has " << this->_hitp << " hit points."
				<<std::endl;
		if (this->_hitp <= 0)
			std::cout<< this->_name << " is dead..." <<std::endl;
	}
	return ;
}

void			ClapTrap::beRepaired(unsigned int amount) {
	if (this->_hitp <= 0)
		std::cout<< this->_name + " is dead... LEAVE HIM ALONE ALREADY !" <<std::endl;
	else if (this->_energyp <= 0)
		std::cout<< this->_name + " don't have enough energy to repair itself !"<<std::endl;
	else 
	{
		this->_energyp--;
		this->_hitp += amount;
		std::cout<<	"Claptrap " + this->_name
			 <<	" has repaired " << amount
			 << " hit points back,"
			 << " he has now " << this->_hitp << " hit points."
			 <<std::endl;
	}
	return ;
}

std::string const&	ClapTrap::getName() const {
	return (this->_name);
}

int				ClapTrap::getHitp() const {
	return (this->_hitp);
}

int				ClapTrap::getEnergyp() const {
	return (this->_energyp);
}

int				ClapTrap::getDamage() const {
	return (this->_damage);
}

void			ClapTrap::setName(std::string name) {
	this->_name = name;
	return ;
}

void			ClapTrap::setHitp(int hitp ) {
	this->_hitp = hitp;
	return ;
}

void			ClapTrap::setEnergyp(int energyp) {
	this->_energyp = energyp;
	return ;
}

void			ClapTrap::setDamage(int damage) {
	this->_damage = damage;
	return ;
}

