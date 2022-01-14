/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 11:18:09 by tpons             #+#    #+#             */
/*   Updated: 2022/01/14 11:44:49 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef WEAPON_H
# define WEAPON_H
# include <iostream>
# include <iomanip>

class	Weapon {
	private :
		std::string _type;
	public:
		Weapon( std::string type );
		~Weapon( void );
		std::string const &	getType( void ) const;
		void				setType( std::string type );
};

#endif