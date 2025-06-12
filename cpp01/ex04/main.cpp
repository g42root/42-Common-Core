/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 17:06:10 by gude-cas          #+#    #+#             */
/*   Updated: 2024/04/08 10:54:22 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void replace(std::ifstream *infile, std::ofstream *outfile, std::string s1, std::string s2)
{
	std::string	line;

	while (std::getline(*infile, line))
	{	
		size_t found = line.find(s1);
		if (line.length() < 1)
		{
			*outfile << std::endl;
			continue;
		}
		while (found != std::string::npos)
		{
			*outfile << line.substr(0, found);
			*outfile << s2;
			line = line.substr(found + s1.length());
			found = line.find(s1);
		}
		*outfile << line;
		if(!infile->eof())
			*outfile << std::endl;
	}
}

int	main(int ac, char **av)
{
	if (ac == 4)
	{
        std::string s1 = av[2];
	    std::string s2 = av[3];
	    std::string newFilename = av[1] + std::string(".replace");
        std::ifstream infile(av[1]);
	    if (!infile.is_open())
	    {
	    	std::cerr << "File " << av[1] << " not found" << std::endl;
	    	return 1;
	    }
	    std::ofstream outfile(newFilename.c_str());
	    if (!outfile.is_open())
	    {
	    	std::cerr << "File " << newFilename << " not found" << std::endl;
	    	return 1;
	    }
	    if (s1.length() < 1)
	    {
	    	std::cerr << "Error: string to replace is empty" << std::endl;
	    	return 1;
	    }
	    replace(&infile, &outfile, s1, s2);
	    infile.close();
	    outfile.close();
	    return 0;
	}
    else
    {
		std::cout << "Usage: ./sed_is_for_losers <filename> <string 1> <string 2>" << std::endl;
		return 1;
    }
}
