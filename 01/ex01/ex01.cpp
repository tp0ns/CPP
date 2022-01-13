/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 04:30:57 by tpons             #+#    #+#             */
/*   Updated: 2021/05/31 04:46:55 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	memoryLeak()
{
	std::string	*panther = new std::string("String panther");
	
	std::cout << *panther << std::endl;
	delete panther;
	
	return ;
}

// int		main(void)
// {
// 	memoryLeak();
// 	return (0);
// }

// To check if there is no leak please use those two commands after uncommenting main function:
//		1- clang++ -Wall -Wextra -Werror ex01.cpp -o leak
//		2- valgrind ./leak
