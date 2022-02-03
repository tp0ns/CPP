#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>
# include <ctime>
# include <cstdlib>

class Brain
{

	public:

		Brain();
		Brain( Brain const & src );
		~Brain();

		Brain &		operator=( Brain const & rhs );

		const std::string getIdea( int i ) const;

	private:
		std::string	ideas[100];
};


#endif /* *********************************************************** BRAIN_H */