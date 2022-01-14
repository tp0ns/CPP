/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 14:28:09 by tpons             #+#    #+#             */
/*   Updated: 2022/01/14 15:08:28 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef KAREN_H
# define KAREN_H
# include <iostream>
# include <iomanip>

class	Karen {
	private :
		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );
	public :
		Karen();
		~Karen( void );
		void	complain( std::string level );
};

#endif
