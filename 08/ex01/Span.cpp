#include "Span.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span() : _size(0), _num(0) {}

Span::Span( unsigned int n ) : _size(n) {}

Span::Span( const Span & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Span::~Span()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Span &				Span::operator=( Span const & rhs )
{
	if ( this != &rhs )
	{
		this->_size = rhs.getSize();
		this->_num = rhs.getNum();
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	Span::addNumber(int value) throw(Span::OutOfStorage) {
	if (this->_num.size() >= this->_size)
		throw Span::OutOfStorage();
	else
		this->_num.push_back(value);
}

void	Span::addNumber(std::vector<int>::iterator first, std::vector<int>::iterator last) throw(Span::OutOfStorage) {
	while (first != last)
	{
		if (this->_num.size() >= this->_size)
			throw Span::OutOfStorage();
		else
			this->_num.push_back(*first);
		first++;
	}
}

long		Span::shortestSpan() const throw(Span::NoValueStored) {
	if (this->_num.size() <= 1)
		throw Span::NoValueStored();
	std::vector<int> temp = this->_num;
	std::sort(temp.begin(), temp.end());
	std::vector<int>::iterator back = temp.begin();
	std::vector<int>::iterator front = ++temp.begin();
	long ret = static_cast<long>(*front - *back);
	while (front != temp.end())
	{
		if (static_cast<long>(*front - *back) < ret)
			ret = static_cast<long>(*front - *back);
		back = front;
		front++;
	}
	return (ret);
}

long		Span::longestSpan() const throw(Span::NoValueStored) {
	if (this->_num.size() <= 1)
		throw Span::NoValueStored();
	std::vector<int> temp = this->_num;
	std::sort(temp.begin(), temp.end());
	return (temp.back() - temp.front());
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::vector<int>	Span::getNum( void ) const {
	return (this->_num);
}

unsigned int		Span::getSize( void ) const {
	return (this->_size);
}

/* ************************************************************************** */