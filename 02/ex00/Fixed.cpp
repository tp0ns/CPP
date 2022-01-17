/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 12:07:54 by tpons             #+#    #+#             */
/*   Updated: 2022/01/17 13:05:47 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : _rawBits(0) {
	std::cout<< "Default constructor called" <<std::endl;
	return ;
}

Fixed::~Fixed( void ) {
	 std::cout<< "Destructor called" <<std::endl;
	return ;
}

Fixed::Fixed( const Fixed &copy ) {
	std::cout<< "Copy constructor called" <<std::endl;
	*this = copy;
	return ;
}

Fixed&	Fixed::operator=(Fixed const &	rhs) {
	std::cout<< "Assignation operator called" <<std::endl;
	this->_rawBits = rhs._rawBits;
	return (*this);
}

int	Fixed::getRawBits( void ) const {
	std::cout<< "getRawBits member function called" <<std::endl;
	return (this->_rawBits);
}

void	Fixed::setRawBits( const int n ) {
	std::cout<< "setRawBits member function called" <<std::endl;
	this->_rawBits = n;
	return ;
}
