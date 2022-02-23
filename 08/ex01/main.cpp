#include "Span.hpp"

int main()
{
	try {	
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout<< "Shortest span : " << sp.shortestSpan() << std::endl;
		std::cout<< "Longest span : " << sp.longestSpan() << std::endl;

		/* ADD OF NEW NUMBERS WITH ITERATORS */
		std::vector<int> vct(4, 42);
		std::vector<int>::iterator it = vct.begin();
		std::vector<int>::iterator itb = vct.end();
		Span spb(10000);
		spb.addNumber(it, itb);
		spb.addNumber(0);
		std::cout<< std::endl;
		std::cout<< "Shortest span : " << spb.shortestSpan() << std::endl;
		std::cout<< "Longest span : " << spb.longestSpan() << std::endl;
	}
	catch (Span::OutOfStorage& e) {
		std::cerr<< e.what() <<std::endl;
	}
	catch (Span::NoValueStored& e) {
		std::cerr<< e.what() <<std::endl;
	}
	return 0;
}