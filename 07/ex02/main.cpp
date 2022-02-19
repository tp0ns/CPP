#include <iostream>
#include "Array.hpp"

#define MAX_VAL 10
void	testInt( void ) {
	Array<int> n(MAX_VAL);
	std::cout<< n.size() <<std::endl;
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		n[i] = value;
		std::cout<< n[i] <<std::endl;
	}
	try {
		n[-2] = 0;
	}
	catch(const std::exception& e) {
		std::cerr << "Invalid index" << '\n';
	}
}

void	testChar( void ) {
	Array<char> c(MAX_VAL);
	std::cout<< c.size() <<std::endl;
	for (int i = 0; i < MAX_VAL; i++)
	{
		c[i] = i + 65;
		std::cout<< c[i] <<std::endl;
	}
	try {
		c[-2] = 0;
	}
	catch(const std::exception& e) {
		std::cerr << "Invalid index" << '\n';
	}
}

void	testFloat( void ) {
	Array<float> f(MAX_VAL);
	std::cout<< f.size() <<std::endl;
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		f[i] = value;
		std::cout<<std::fixed<< f[i] <<std::endl;
	}
	try {
		f[-2] = 0;
	}
	catch(const std::exception& e) {
		std::cerr << "Invalid index" << '\n';
	}
}

int main(int, char**)
{
	testInt();
	std::cout<<std::endl;
	testChar();
	std::cout<<std::endl;
	testFloat();
	std::cout<<std::endl;
	return 0;
}