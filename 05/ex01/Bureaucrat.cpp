#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat() : _name("default"), _grade(150)
{
	return ;
}

Bureaucrat::Bureaucrat( std::string name, int grade) : _name(name), _grade(grade) {
	try {
		if (this->_grade < 1)
			throw Bureaucrat::GradeTooHighException();
		else if (this->_grade > 150)
			throw Bureaucrat::GradeTooLowException();
		else
			return ;
	}
	catch (Bureaucrat::GradeTooHighException& e) {
		std::cerr << this->_name << " " << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException& e) {
		std::cerr << this->_name << " " << e.what() << std::endl;
	}
}

Bureaucrat::Bureaucrat( const Bureaucrat & src )
{
	*this = src;
	try {
		if (this->_grade < 1)
			throw Bureaucrat::GradeTooHighException();
		else if (this->_grade > 150)
			throw Bureaucrat::GradeTooLowException();
		else
			return ;
	}
	catch (Bureaucrat::GradeTooHighException& e) {
		std::cerr << this->_name << " " << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException& e) {
		std::cerr << this->_name << " " << e.what() << std::endl;
	}
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat()
{
	return ;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Bureaucrat &				Bureaucrat::operator=( Bureaucrat const & rhs )
{
	if ( this != &rhs )
	{
		this->_name = rhs.getName();
		this->_grade = rhs.getGrade();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i )
{
	o << i.getName() << ", bureaucrat grade " << i.getGrade() << "." <<std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void			Bureaucrat::signForm( Form& toSign ) {
	try{
		toSign.beSigned(*this);
	}
	catch (Form::GradeTooLowException& e) {
		std::cout<< this->_name << " couldn't sign "
		<< toSign.getName() << " because your " << e.what() <<std::endl;
		return ;
	}
	std::cout<< this->_name << " signed " << toSign.getName() <<std::endl;
	return ;
}

void			Bureaucrat::incGrade( void ) {
	try {
		this->_grade--;
		if (this->_grade < 1)
			throw Bureaucrat::GradeTooHighException();
		else if (this->_grade > 150)
			throw Bureaucrat::GradeTooLowException();
		else
			return ;
	}
	catch (Bureaucrat::GradeTooHighException& e) {
		std::cerr << this->_name << " " << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException& e) {
		std::cerr << this->_name << " " << e.what() << std::endl;
	}
}

void			Bureaucrat::decGrade( void ) {
	try {
		this->_grade++;
		if (this->_grade < 1)
			throw Bureaucrat::GradeTooHighException();
		else if (this->_grade > 150)
			throw Bureaucrat::GradeTooLowException();
		else
			return ;
	}
	catch (Bureaucrat::GradeTooHighException& e) {
		std::cerr << this->_name << " " << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException& e) {
		std::cerr << this->_name << " " << e.what() << std::endl;
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string		Bureaucrat::getName( void ) const {
	return (this->_name);
}

int				Bureaucrat::getGrade( void ) const {
	return (this->_grade);
}

/* ************************************************************************** */