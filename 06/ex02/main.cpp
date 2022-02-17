#include "identify.hpp"

int	main( void ) {
	Base	*id = generate();

	identify(id); //identify(Base*)
	identify(*id); //identify(Base&)
	delete id;
	return (0);
}
