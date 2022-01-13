/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 07:42:20 by tpons             #+#    #+#             */
/*   Updated: 2021/05/31 07:49:02 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string brain = "HI THIS IS BRAIN";
	std::string *brain_ptr = &brain;
	std::string &brain_ref = brain;

	std::cout<< "Pointer : " << *brain_ptr << std::endl;
	std::cout<< "Reference : " << brain_ref <<std::endl;

	return(0);
}
