/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 18:30:23 by tpons             #+#    #+#             */
/*   Updated: 2022/01/21 12:37:04 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void ){
	return ;
}

Zombie::~Zombie( void ){
	std::cout<< this->_name << " is dead ... again ! " << std::endl;
	return ; 
}

void	Zombie::announce( void ) const
{
	std::cout<< this->_name << ":" << " BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}

void	Zombie::setName( std::string name )
{
	this->_name = name;
	return ;
}
