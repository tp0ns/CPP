#ifndef SCALAR_HPP
# define SCALAR_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <climits>
# include <stdlib.h>
# include <cmath>

# define NDCHAR 1 << 0
# define ICHAR 	1 << 1
# define IINT 	1 << 2

enum eType{
	ERROR = 0,
	CHAR = 1,
	INT = 2,
	FLOAT = 3,
	DOUBLE = 4,
};

class Scalar
{

	public:
		Scalar( std::string input);
		Scalar( Scalar const & src );
		~Scalar();

		Scalar &		operator=( Scalar const & rhs );

		std::string	getInput( void ) const;
		int			getFlag( void ) const;
		char		getC( void ) const;
		int			getI( void ) const;
		float		getF( void ) const;
		double		getD( void ) const;

		class InvalidInput : std::exception {
			public :
				virtual const char *what() const throw() {
					return ("Input must be char, int, float or double representations.");
				}
		};

	private:
		Scalar();

		bool isC( std::string input );
		bool isI( std::string input );
		bool isF( std::string input );
		bool isD( std::string input );

		void	convert( void );

		std::string	_input;
		enum eType	_type;
		int			_flag;
		char		_c;
		int			_i;
		float		_f;
		double		_d;

};

std::ostream &			operator<<( std::ostream & o, Scalar const & i );

#endif /* ********************************************************** SCALAR_H */