/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 16:34:15 by tpons             #+#    #+#             */
/*   Updated: 2021/06/04 17:57:38 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA() : _name("Steve"){
	return ;
}

HumanA::HumanA(std::string name) : _name(name){
	return ;
}

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _myweapon(&weapon){
	return ;
}

HumanA::~HumanA(){
	return ;
}

void	HumanA::setWeapon(Weapon &new_weapon){
	this->_myweapon = &new_weapon;
	return ;
}

void	HumanA::attack() const {
	std::cout<< this->_name << " attacks with his " << this->_myweapon->getType() << " !!" <<std::endl;
	return ;
}
