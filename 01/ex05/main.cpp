/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 14:27:44 by tpons             #+#    #+#             */
/*   Updated: 2022/01/14 15:13:40 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main( void )
{
	Karen karen;

	karen.complain("DEBUG");
	std::cout<< "----------------" <<std::endl;
	karen.complain("INFO");
	std::cout<< "----------------" <<std::endl;
	karen.complain("WARNING");
	std::cout<< "----------------" <<std::endl;
	karen.complain("ERROR");
	return (0);
}
