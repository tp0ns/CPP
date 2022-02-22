#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <vector>
# include <algorithm>

class Span
{
	public:
		Span(unsigned int n);
		Span( Span const & src );
		~Span();

		class NoValueStored : public std::exception {
			public:
				virtual const char *what() const throw()
				{
					return ("No value stored");
				}
		};
		class OutOfStorage : public std::exception {
			public:
				virtual const char *what() const throw()
				{
					return ("Too much value stored");
				}
		};

		Span &				operator=( Span const & rhs );

		void		addNumber(int value) throw(Span::OutOfStorage);
		void 		addNumber(std::vector<int>::iterator first, std::vector<int>::iterator last) throw(Span::OutOfStorage);
		long		shortestSpan() const throw(Span::NoValueStored);
		long		longestSpan() const throw(Span::NoValueStored);

		std::vector<int>	getNum( void ) const;
		unsigned int		getSize( void ) const;
	private:
		Span();
		unsigned int		_size;
		std::vector<int>	_num;
};

#endif /* ************************************************************ SPAN_H */