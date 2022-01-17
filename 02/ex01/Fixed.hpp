/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 12:07:51 by tpons             #+#    #+#             */
/*   Updated: 2022/01/17 18:23:12 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef FIXED_H
# define FIXED_H
# include <iostream>
# include <iomanip>

class	Fixed {
	private :
		int					_rawBits;
		const static int	_fracBits = 8;
	public :
		Fixed( void );
		~Fixed( void );
		Fixed( const int num );
		Fixed( const float num );
		Fixed( const Fixed &copy );

		Fixed&	operator=( const Fixed &rhs );

		int		getRawBits( void ) const;
		void	setRawBits( const int n );
		float	toFloat( void ) const;
		int		toInt(void) const;
};

std::ostream&	operator<<(std::ostream &o, const Fixed &rhs);

#endif