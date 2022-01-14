/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 11:45:12 by tpons             #+#    #+#             */
/*   Updated: 2022/01/14 12:12:59 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon& weapon) :  _name(name), _weapon(weapon)
{
	return ;
}

HumanA::~HumanA( void ) {
	return ;
}

void	HumanA::attack( void ) const {
	std::cout<< this->_name<<" attacks with his "<<this->_weapon.getType()<<std::endl;
	return ;
}
