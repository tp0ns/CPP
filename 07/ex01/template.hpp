#ifndef TEMPLATE_HPP
# define TEMPLATE_HPP
# include <iostream>
# include <string>

template <typename T>
void	iter(T const* tab, size_t const size, void f(T const &)) {
	for (size_t i = 0; i < size; i++) {
		f(tab[i]);
	}
}

template <typename T>
void	output( T const &e){
	std::cout<< e <<std::endl;
}

#endif