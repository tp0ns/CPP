#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <iomanip>
# include <string>

template<typename T>
int		easyfind(T haystack, int needle) throw() {
	T::iterator i;

	i = std::find(haystack.begin(), haystack.end(), needle);
	if (i == haystack.end())
		throw std::exception();
	else
		return (*i);
};

#endif