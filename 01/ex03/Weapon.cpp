/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 11:20:03 by tpons             #+#    #+#             */
/*   Updated: 2022/01/14 11:45:03 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type ) : _type(type) {
	return ;
}

Weapon::~Weapon( void ) {
	return ;
}

std::string const & Weapon::getType( void ) const {
	return (this->_type);
}

void	Weapon::setType( std::string type) {
	this->_type = type;
	return ;
}
