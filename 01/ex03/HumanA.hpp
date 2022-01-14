/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 11:18:49 by tpons             #+#    #+#             */
/*   Updated: 2022/01/14 12:12:11 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef HUMANA_H
# define HUMANA_H
# include <iostream>
# include <iomanip>
# include "Weapon.hpp"

class	HumanA {
	private :
		std::string _name;
		Weapon&		_weapon;
	public:
		HumanA( std::string name, Weapon& Weapon);
		~HumanA( void );
		void	attack( void ) const;
};

#endif