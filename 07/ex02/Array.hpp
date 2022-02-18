#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>

template <typename T>
class Array
{

	public:
		Array() : _array (0), _size(0) {};
		Array( unsigned int n) : _array(new T[n]), _size(n) {};
		Array( Array const & src ) : _array(NULL) { *this = src; };
		~Array() { delete[] _array; };

		unsigned int	size( void ) const { return (this->_size); };
		
		T &		operator[] (unsigned int i) const {
			if (i >= this->_size)
				throw std::exception();
			else
				return (_array[i]);
		};

		Array &		operator=( Array const & rhs ) {
			if (_array != NULL)
				delete[] _array;
			_size = rhs.size();
			_array = new T[_size]();
			for (unsigned int i = 0; i < _size; i++)
				_array[i] = rhs[i];
			return (*this);
		};

	private:
		T*				_array;
		unsigned int	_size;
};

template <typename T>
std::ostream &			operator<<( std::ostream & o, Array< T > const & i ) {
	for (unsigned int n = 0; n < i.size(); n++)
		o << i[n] <<std::endl;
};

#endif /* *********************************************************** ARRAY_H */