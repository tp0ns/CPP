#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat() : _name("default"), _grade(150)
{
	return ;
}

Bureaucrat::Bureaucrat( std::string name, int grade) : _name(name), _grade(grade) {
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	return ;
}

Bureaucrat::Bureaucrat( const Bureaucrat & src )
{
	*this = src;
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	return ;
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
		this->_grade = rhs.getGrade();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i )
{
	o << i.getName() << ", bureaucrat grade " << i.getGrade() << ".";
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void			Bureaucrat::signForm( Form* form ) {
	if (form != NULL)
	{
		try{
			form->beSigned(this);
			std::cout<< this->_name << " signed " << form->getName() <<std::endl;
		}
		catch (Form::GradeTooLowException& e) {
			std::cout<< this->_name << " couldn't sign "
			<< form->getName() << " because your " << e.what() <<std::endl;
		}
	}
	else
		std::cout<< "Form is NULL" <<std::endl;
}

void			Bureaucrat::incGrade( void ) {
	if (this->_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->_grade - 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade--;
	return ;
}

void			Bureaucrat::decGrade( void ) {
	if (this->_grade + 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade++;
	return ;
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