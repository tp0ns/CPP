#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:

		const std::string	_name;
		bool				_signed;
		const int			_signGrade;
		const int			_execGrade;

	public:

		Form();
		Form(const std::string name, const int signGrade, const int execGrade);
		Form( Form const & src );
		~Form();

		Form &		operator=( Form const & rhs );

		void		beSigned(Bureaucrat& signer);

		class GradeTooHighException : std::exception {
			public :
				virtual const char *what() const throw() {
					return ("grade is too high.");
				}
		};

		class GradeTooLowException : std::exception {
			public :
				virtual const char *what() const throw() {
					return ("grade is too low.");
				}	
		};

		std::string	getName( void ) const;
		bool				isSigned( void ) const;
		int			getSignGrade( void ) const;
		int			getExecGrade( void ) const;
};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* ************************************************************ FORM_H */