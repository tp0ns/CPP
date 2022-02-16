#include "Scalar.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Scalar::Scalar() : _type(ERROR), _flag(0), _c(0), _i(0), _f(0.0f), _d(0.0) {}

Scalar::Scalar( std::string input) : _input(input), _type(ERROR), _flag(0), _c(0), _i(0), _f(0.0f), _d(0.0)
{
	if (!isC(input) && !isI(input) && !isF(input) && !isD(input))
		throw Scalar::InvalidInput();
	else
		convert();
}

Scalar::Scalar( const Scalar & src ) {
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Scalar::~Scalar() {}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Scalar &				Scalar::operator=( Scalar const & rhs )
{
	if ( this != &rhs )
	{
		this->_c = rhs.getC();
		this->_i = rhs.getI();
		this->_f = rhs.getF();
		this->_d = rhs.getD();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Scalar const & i )
{
	o << "char: ";
	if (i.getFlag() & ICHAR)
		o << "impossible" <<std::endl;
	else if (i.getFlag() & NDCHAR)
		o << "Non displayable" <<std::endl;
	else
		o << "'" << i.getC() << "'" <<std::endl;
	o << "int: ";
	if (i.getFlag() & IINT)
		o << "impossible" <<std::endl;
	else
		o << i.getI() <<std::endl;
	o << std::fixed << "float: "<< i.getF() << "f"
	<<std::endl << "double: " << i.getD();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

bool Scalar::isC( std::string input ) {
	if ((input.length() == 1)
		&& std::isprint(input[0]) && (input[0] < 48 || input[0] > 57))
	{
		this->_type = CHAR;
		this->_c = static_cast<char>(input[0]);
		return (true);
	}
	return (false);
}

bool Scalar::isI( std::string input ) {
	char		*pEnd;
	long int	value = std::strtol(input.c_str(), &pEnd, 10);

	if ( !*pEnd && value >= INT_MIN && value <= INT_MAX)
	{
		this->_type = INT;
		this->_i = static_cast<int>(value);
		return (true);
	}
	return (false);
}

bool Scalar::isF( std::string input ) {
	char	*pEnd;
	float	value = std::strtof(input.c_str(), &pEnd);

	if (*pEnd == 'f' && !*(pEnd + 1))
	{
		this->_type = FLOAT;
		this->_f = static_cast<float>(value);
		return (true);
	}
	return (false);
}

bool Scalar::isD( std::string input ) {
	char	*pEnd;
	double	value = std::strtod(input.c_str(), &pEnd);

	if (*pEnd != '\0')
		return (false);
	this->_type = DOUBLE;
	this->_d = static_cast<double>(value);
	return (true);
}

void	Scalar::convert( void ) {
	switch (this->_type)
	{
	case CHAR:
		this->_i = static_cast<int>(this->_c);
		this->_f = static_cast<float>(this->_c);
		this->_d = static_cast<double>(this->_c);
		break;
	case INT:
		this->_c = static_cast<char>(this->_i);
		this->_f = static_cast<float>(this->_i);
		this->_d = static_cast<double>(this->_i);
		break;
	case FLOAT:
		this->_c = static_cast<char>(this->_f);
		this->_i = static_cast<int>(this->_f);
		this->_d = static_cast<double>(this->_f);
		break;
	case DOUBLE:
		this->_c = static_cast<char>(this->_d);
		this->_i = static_cast<int>(this->_d);
		this->_f = static_cast<float>(this->_d);
		break;
	default:
		std::cerr<< "Wtf ! How did you get here ?" <<std::endl;
		break;
	}
	if (this->_d < INT_MIN || this->_d > INT_MAX || std::isnan(this->_d) || std::isinf(this->_d))
		this->_flag = IINT | ICHAR;
	else if (this->_d < CHAR_MIN || this->_d > CHAR_MAX)
		this->_flag = ICHAR;
	else if (!std::isprint(this->_c))
		this->_flag = NDCHAR;
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	Scalar::getInput( void ) const {
	return (this->_input);
}

int			Scalar::getFlag( void ) const {
	return (this->_flag);
}

char		Scalar::getC( void ) const {
	return (this->_c);
}

int			Scalar::getI( void ) const {
	return (this->_i);
}

float		Scalar::getF( void ) const {
	return (this->_f);
}

double		Scalar::getD( void ) const {
	return (this->_d);
}

/* ************************************************************************** */