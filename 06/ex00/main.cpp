# include "Scalar.hpp"

int		main( int ac, char **av ) {
	if (ac != 2) {
		std::cerr<< "Missing agrument to convert..." <<std::endl;
		return (1);
	}
	try {
		Scalar conv(av[1]);

		std::cout<< conv << std::endl;
	}
	catch (Scalar::InvalidInput&  e) {
		std::cerr<< e.what() <<std::endl;
		return (1);
	}
	return (0);
}