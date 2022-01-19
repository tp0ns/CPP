/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 12:07:54 by tpons             #+#    #+#             */
/*   Updated: 2022/01/19 15:08:43 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed( void ) : _rawBits(0) {
	return ;
}

Fixed::~Fixed( void ) {

	return ;
}

Fixed::Fixed( const	int num ) {
	this->_rawBits = num << this->_fracBits;
	return ;
}

Fixed::Fixed( const float num) {
	this->_rawBits = (int)roundf(num * (1 << this->_fracBits)); 
	return ;
}

Fixed::Fixed( const Fixed &copy ) {
	*this = copy;
	return ;
}

//Comparison operator

bool	Fixed::operator> ( const Fixed &rhs) const {
	if (this->_rawBits > rhs.getRawBits())
		return(true);
	return(false);
}

bool	Fixed::operator<( const Fixed &rhs) const {
	if (this->_rawBits < rhs.getRawBits())
		return(true);
	return(false);
}

bool	Fixed::operator>=( const Fixed &rhs) const {
	if (this->_rawBits >= rhs.getRawBits())
		return(true);
	return(false);
}

bool	Fixed::operator<=( const Fixed &rhs) const {
	if (this->_rawBits <= rhs.getRawBits())
		return(true);
	return(false);
}

bool	Fixed::operator==( const Fixed &rhs) const {
	if (this->_rawBits == rhs.getRawBits())
		return(true);
	return(false);
}

bool	Fixed::operator!=( const Fixed &rhs) const {
	if (this->_rawBits != rhs.getRawBits())
		return(true);
	return(false);
}

//Arithmetic operator

Fixed	Fixed::operator+( const Fixed &rhs ) const {
	Fixed	ret;
	
	ret.setRawBits(this->_rawBits + rhs.getRawBits());
	return (ret);
}

Fixed	Fixed::operator-( const Fixed &rhs ) const {
	Fixed	ret;
	
	ret.setRawBits(this->_rawBits - rhs.getRawBits());
	return (ret);
}

Fixed	Fixed::operator*( const Fixed &rhs ) const {
	Fixed	ret(this->toFloat() * rhs.toFloat());

	return (ret);
}

Fixed	Fixed::operator/( const Fixed &rhs ) const {
	Fixed	ret(this->toFloat() / rhs.toFloat());

	return (ret);
}

// Increment and decrement

Fixed&	Fixed::operator=(Fixed const &	rhs) {
	this->_rawBits = rhs._rawBits;
	return (*this);
}

Fixed&	Fixed::operator++( void ) {
	this->_rawBits++;
	return (*this);
}

Fixed	Fixed::operator++( int ) {
	Fixed	ret = *this;

	this->_rawBits++;
	return (ret);
}

Fixed&	Fixed::operator--( void ) {
	this->_rawBits--;
	return (*this);
}

Fixed	Fixed::operator--( int ) {
	Fixed	ret = *this;

	this->_rawBits--;
	return (ret);
}

//min and max functions and overflow

Fixed&	Fixed::min( Fixed &lhs, Fixed &rhs)
{
	return (lhs < rhs ? lhs : rhs);
}

const Fixed&	Fixed::min( const Fixed &lhs, const Fixed &rhs )
{
	return (lhs < rhs ? lhs : rhs);
}

Fixed&	Fixed::max( Fixed &lhs, Fixed &rhs)
{
	return (lhs > rhs ? lhs : rhs);
}

const Fixed&	Fixed::max( const Fixed &lhs, const Fixed &rhs )
{
	return (lhs > rhs ? lhs : rhs);
}

int	Fixed::getRawBits( void ) const {
	return (this->_rawBits);
}

void	Fixed::setRawBits( const int n ) {
	this->_rawBits = n;
	return ;
}

int		Fixed::toInt( void ) const { 
	return (this->_rawBits >> this->_fracBits);
}

float	Fixed::toFloat( void ) const {
	return ((float)this->_rawBits / (1 << this->_fracBits));
}

std::ostream&	operator<<(std::ostream &o, const Fixed &rhs) {
	o << rhs.toFloat();
	return (o);
}
