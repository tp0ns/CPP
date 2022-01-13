/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 04:01:53 by tpons             #+#    #+#             */
/*   Updated: 2021/06/01 05:28:15 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(){
	return ;
}

Human::~Human(){
	return ;
}

std::string	Human::identify(void) const
{
	return (this->_brain.identify());
}

Brain const &Human::getBrain(void) const{
	Brain const &brain_ref = this->_brain;
	return (brain_ref);
}
