#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap {
	private:
		std::string	_name;
		int			_hitp;
		int			_energyp;
		int			_damage;
		ClapTrap();

	public:
		ClapTrap( std::string name );
		ClapTrap( ClapTrap const & src );
		~ClapTrap();

		void			attack(const std::string& target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		ClapTrap &		operator=( ClapTrap const & rhs );
};

std::ostream &			operator<<( std::ostream & o, ClapTrap const & i );

#endif