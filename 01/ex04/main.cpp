/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 12:43:59 by tpons             #+#    #+#             */
/*   Updated: 2022/01/26 13:22:08 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>

std::string	ft_replace(std::string temp, size_t pos, size_t len, std::string s2)
{	
	temp.erase(pos, len);
	temp.insert(pos, s2);
	return (temp);
}

int	sed_for_losers(char **av)
{
	std::string 		filename = av[1], out_filename = (filename + ".replace"), s1 = av[2], s2 = av[3];
	std::ifstream		inputfile(filename.c_str());
	std::stringstream	temp_stream;
	std::string			temp;

	if (filename.empty() || s1.empty())
	{
		std::cout<< "One of your argument is invalid" <<std::endl;
		return (0);
	}
	if (inputfile.is_open())
	{
		temp_stream << inputfile.rdbuf();
		temp = temp_stream.str();
		if (s1.compare(s2) != 0)
		{
			while (temp.find(s1) != temp.npos)
				temp = ft_replace(temp, temp.find(s1), s1.length(), s2);
		}
		inputfile.close();
	}
	else 
	{
		std::cout<< "Unable to open input file" <<std::endl;
		return (0);
	}
	std::ofstream		outputfile(out_filename.c_str());
	if (!outputfile.is_open())
	{
		std::cout<< "Unable to open output file" <<std::endl;
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