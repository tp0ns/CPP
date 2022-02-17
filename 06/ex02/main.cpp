#include "identify.hpp"

int	main( void ) {
	Base	*test1 = generate();

	identify(test1);
	identify(*test1);
	delete test1;
	return (0);
}
