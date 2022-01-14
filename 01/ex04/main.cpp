/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 12:43:59 by tpons             #+#    #+#             */
/*   Updated: 2022/01/14 12:54:36 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>

int	sed_for_losers(char **av)
{
	std::string 		filename = av[1], s1 = av[2], s2 = av[3];
	std::ifstream		inputfile(filename);
	std::ofstream		outputfile(filename + ".replace");
	std::stringstream	temp_stream;
	std::string			temp;
	
	if (filename.empty() || s1.empty() || s2.empty())
	{
		std::cout<< "One of your argument is invalid" <<std::endl;
		return (0);
	}
	if (inputfile.is_open() && outputfile.is_open())
	{
		temp_stream << inputfile.rdbuf();
		temp = temp_stream.str();
		while (temp.find(s1) != temp.npos)
			temp.replace(temp.find(s1), s1.length(), s2);
		inputfile.close();
	}
	else 
	{
		std::cout<< "Unable to open one of the necessary file" <<std::endl;
		return (0);
	}
	outputfile << temp;
	return (1);
}

int	main(int ac, char **av)
{
	if (ac != 4)
		std::cout<< "Not enough or too much arguments" <<std::endl;
	else
		sed_for_losers(av);
	return (0);
}