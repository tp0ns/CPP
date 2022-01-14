/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 11:18:55 by tpons             #+#    #+#             */
/*   Updated: 2022/01/14 12:41:16 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef HUMANB_H
# define HUMANB_H
# include <iostream>
# include <iomanip>
# include "Weapon.hpp"

class	HumanB {
	private :
		std::string _name;
		Weapon*		_weapon;
	public:
		HumanB( std::string name);
		~HumanB( void );
		void	setWeapon(Weapon& weapon);
		void	attack( void ) const;
};

#endif