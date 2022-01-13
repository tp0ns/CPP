/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 04:01:19 by tpons             #+#    #+#             */
/*   Updated: 2021/06/01 05:30:57 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() : _size_mm(45) {
	return ;
}

Brain::~Brain(){
	return ;
}

std::string	Brain::identify(void) const
{
	std::stringstream this_address;

	this_address << this; //Add address of "this" to the stringstream ( left to << operand must be pointer type)

	return (this_address.str());
}

int			Brain::get_size(void) const{
	return (this->_size_mm);
}

void		Brain::set_size(int new_size){
	this->_size_mm = new_size;
	return ;
}
