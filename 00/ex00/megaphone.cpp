/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 03:35:45 by tpons             #+#    #+#             */
/*   Updated: 2021/05/27 03:45:13 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char** av)
{
	int	i = 1;
	int j;

	if (ac == 1)
	{
		std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (0);
	}
	while (av[i])
	{
		j = 0;
		while (av[i][j])
			std::cout<<(char)toupper(av[i][j++]);
		i++;
	}
	std::cout<<std::endl;
	return (0);
}
