#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form() : _name("default"), _signed(false), _signGrade(150), _execGrade(150)
{
	return ;
}

Form::Form(const std::string name, const int signGrade, const int execGrade) :
	_name(name), _signed(false), _signGrade(signGrade), _execGrade(execGrade)
{
	try {
		if (this->_signGrade < 1 || this->_execGrade < 1)
			throw Form::GradeTooHighException();
		else if (this->_signGrade > 150 || this->_execGrade > 150)
			throw Form::GradeTooLowException();
		else
			return ;
	}
	catch (Form::GradeTooHighException& e) {
		std::cerr << this->_name << " " << e.what() << std::endl;
	}
	catch (Form::GradeTooLowException& e) {
		std::cerr << this->_name << " " << e.what() << std::endl;
	}
}

Form::Form( const Form & src ) : _name(src.getName()), _signGrade(src.getSignGrade()), _execGrade(src.getExecGrade())
{
	*this = src;
	try {
		if (this->_signGrade < 1 || this->_execGrade < 1)
			throw Form::GradeTooHighException();
		else if (this->_signGrade > 150 || this->_execGrade > 150)
			throw Form::GradeTooLowException();
		else
			return ;
	}
	catch (Form::GradeTooHighException& e) {
		std::cerr << this->_name << " " << e.what() << std::endl;
	}
	catch (Form::GradeTooLowException& e) {
		std::cerr << this->_name << " " << e.what() << std::endl;
	}
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form()
{
	return ;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form &				Form::operator=( Form const & rhs )
{
	if ( this != &rhs )
		this->_signed = rhs.isSigned();
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Form const & i )
{
	o << i.getName() + " :" << std::endl
	<<(i.isSigned() ? "Has been signed." : "Has not been signed")<<std::endl
	<< "Bureaucrat needs to be graded: " << i.getSignGrade() << " to sign this form"<<std::endl
	<< "Bureaucrat needs to be graded: " << i.getExecGrade() << " to execute this form"<<std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void		Form::beSigned(Bureaucrat& signer) {
	if (signer.getGrade() <= this->_signGrade)
		this->_signed = true;
	else
		throw Form::GradeTooLowException();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	Form::getName( void ) const {
	return (this->_name);
}		

bool				Form::isSigned( void ) const {
	return (this->_signed);
}		

int			Form::getSignGrade( void ) const {
	return (this->_signGrade);
}		

int			Form::getExecGrade( void ) const {
	return (this->_execGrade);
}		

/* ************************************************************************** */