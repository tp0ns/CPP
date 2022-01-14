/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 11:45:31 by tpons             #+#    #+#             */
/*   Updated: 2022/01/14 12:41:13 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name) : _name(name) {
	return ;
}

HumanB::~HumanB( void ) {
	return ;
}

void	HumanB::setWeapon(Weapon& weapon) {
	this->_weapon = &weapon;
	return ;
}

void	HumanB::attack( void ) const {
	std::cout	<< this->_name << " attacks with his "
				<< this->_weapon->getType() << std::endl;
	return ;
}
