/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 16:34:18 by tpons             #+#    #+#             */
/*   Updated: 2021/06/04 17:57:49 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB() : _name("Steve"){
	return ;
}

HumanB::HumanB(std::string name) : _name(name){
	return ;
}

HumanB::HumanB(std::string name, Weapon &weapon) : _name(name), _myweapon(&weapon){
	return ;
}

HumanB::~HumanB(){
	return ;
}

void	HumanB::setWeapon(Weapon &new_weapon){
	this->_myweapon = &new_weapon;
	return ;
}

void	HumanB::attack() const {
	std::cout<< this->_name << " attacks with his " << this->_myweapon->getType() << " !!" <<std::endl;
	return ;
}
