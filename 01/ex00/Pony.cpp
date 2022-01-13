/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 03:41:32 by tpons             #+#    #+#             */
/*   Updated: 2021/05/31 04:18:23 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string	n, std::string c, std::string s) : _name(n), _color(c), _size(s) {
	std::cout<< "A wonderful pony is born" <<std::endl;
	return ;
}

Pony::~Pony(void){
	std::cout<< "Unfortunately " << this->get_name() << " has passed away" <<std::endl;
	return ;
}

std::string	Pony::get_name() const
{
	return (this->_name);
}

std::string Pony::get_color() const
{
	return (this->_color);
}

std::string	Pony::get_size() const
{
	return (this->_size);
}
