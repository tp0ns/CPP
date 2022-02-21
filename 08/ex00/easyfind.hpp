#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <algorithm>
# include <vector>
# include <list>

template<typename T>
int		easyfind(T haystack, int needle) throw(std::exception) {
	typename T::iterator it;

	it = std::find(haystack.begin(), haystack.end(), needle);
	if (it == haystack.end())
		throw std::exception();
	else
		return (*it);
};

#endif