/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 16:34:09 by tpons             #+#    #+#             */
/*   Updated: 2021/06/04 17:14:21 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() : _type("Default wood-stick"){
	return ;
}

Weapon::Weapon(std::string type) : _type(type){
	return ;
}

Weapon::~Weapon(){
	return ;
}

std::string const &Weapon::getType() const{
	return (this->_type);
}

void Weapon::setType(std::string new_type){
	this->_type = new_type;
	return ;
}
