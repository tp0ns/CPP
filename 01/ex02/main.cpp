/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 10:53:10 by tpons             #+#    #+#             */
/*   Updated: 2022/01/14 11:13:56 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

int	main( void ) {
	std::string		string = "HI THIS IS BRAIN";
	std::string*	stringPTR = &string;
	std::string&	stringREF = string;

	std::cout<< "Using string   : " << &string <<std::endl;
	std::cout<< "Using stringPTR: " << stringPTR <<std::endl;
	std::cout<< "Using stringREF: " << &stringREF <<std::endl;
	std::cout<<std::endl;
	std::cout<< "Using stringPTR: " << *stringPTR <<std::endl;
	std::cout<< "Using stringREF: " << stringREF <<std::endl;
	
	return (0);
}
