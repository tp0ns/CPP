/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 12:07:51 by tpons             #+#    #+#             */
/*   Updated: 2022/01/17 13:02:47 by tpons            ###   ########.fr       */
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
		Fixed( const Fixed &copy );

		Fixed &	operator=( const Fixed &rhs); //rhs -> right hand side
		
		int		getRawBits( void ) const;
		void	setRawBits( const int n );
};

#endif