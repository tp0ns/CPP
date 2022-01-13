/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 04:50:57 by tpons             #+#    #+#             */
/*   Updated: 2021/05/31 06:18:58 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : _name("Bryan"), _type("RocketLeague Addict"){
	return ;
}

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type){
	return ;
}

Zombie::~Zombie(){
	return ;
}

void		Zombie::announce() const
{
	std::cout<<"<"<<this->_name<<" ("<<this->_type<<")>: I want to eat braiiiiiiiiiiiinsssss"<<std::endl;
	return ;
}

std::string	Zombie::get_name() const{
	return (this->_name);
}

std::string	Zombie::get_type() const{
	return (this->_type);
}
