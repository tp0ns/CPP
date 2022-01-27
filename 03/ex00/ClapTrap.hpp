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

	public:
		ClapTrap( void );
		ClapTrap( std::string name );
		ClapTrap( ClapTrap const & src );
		~ClapTrap();

		void			attack(const std::string& target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);

		ClapTrap &		operator=( ClapTrap const & rhs );

		std::string const &	getName() const;
		int				getHitp() const;
		int				getEnergyp() const;
		int				getDamage() const;

		void			setName(std::string name);
		void			setHitp(int hitp );
		void			setEnergyp(int energyp);
		void			setDamage(int damage);
};

std::ostream &			operator<<( std::ostream & o, ClapTrap const & i );

#endif