#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <stack>
# include <iterator>
# include <algorithm>
# include <list>
template <typename T>
class MutantStack : public std::stack< T >
{
	public :
		MutantStack() {};
		MutantStack( MutantStack<T> const & src ) { *this = src; };
		~MutantStack() {};
		
		MutantStack<T>	&operator=( MutantStack<T> const & rhs ) {
			if (*this != rhs)
				*this->c = rhs.c;
			return (*this);
		}

		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin() {
			return (this->c.begin());
		};
		iterator end() {
			return (this->c.end());
		};

		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		reverse_iterator rbegin() {
			return (this->c.rbegin());
		};
		reverse_iterator rend() {
			return (this->c.rend());
		};
};

#endif /* ***************************************************** MUTANTSTACK_H */