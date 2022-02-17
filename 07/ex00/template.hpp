#ifndef TEMPLATE_HPP
# define TEMPLATE_HPP
# include <iostream>
# include <string>

template <typename T>
void	swap(T& x, T& y) {
	T holder;
	holder = x;
	x = y;
	y = holder;
}

template <typename T>
T const &	min(T const & x, T const & y) {
	return (y <= x ? y : x);
}

template <typename T>
T const &	max(T const & x, T const & y) {
	return (y >= x ? y : x);
}

#endif