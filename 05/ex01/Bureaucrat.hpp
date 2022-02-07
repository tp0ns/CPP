#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		std::string	_name;
		int			_grade;

	public:

		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat( Bureaucrat const & src );
		~Bureaucrat();

		Bureaucrat &		operator=( Bureaucrat const & rhs );

		std::string		getName( void ) const;
		int				getGrade( void ) const;

		void			incGrade( void );
		void			decGrade( void );

		void			signForm( Form& form );

		class GradeTooHighException : std::exception {
			public :
				virtual const char *what() const throw() {
					return ("grade is too high");
				}
		};

		class GradeTooLowException : std::exception {
			public :
				virtual const char *what() const throw() {
					return ("grade is too low");
				}	
		};
};

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i );

#endif /* ****************************************************** BUREAUCRAT_H */