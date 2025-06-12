/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 11:13:45 by gude-cas          #+#    #+#             */
/*   Updated: 2025/05/10 11:56:43 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

////////////////////////////// PARSER FUNCTIONNS ///////////////////////////////

bool isValidNumber(char const *str)
{
    if (!str || !*str)
        return (false);
        
    for (int i = 0; str[i]; ++i)
    {
        if (!std::isdigit(str[i]))
            return (false);
    }
    
    long long nb = std::atoll(str);
    if (nb < 0 || nb > INT_MAX)
        return (false);

    return (true);
}

bool containsDuplicates(char **av, int count)
{
    for (int i = 1; i < count; ++i)
    {
        for (int j = i + 1; j < count; ++j)
        {
            if (std::strcmp(av[i], av[j]) == 0)
                return (true);
        }
    }
    return (false);
}

////////////////////////////////////////////////////////////////////////////////



///////////////////////////////////// MAIN /////////////////////////////////////

int main(int ac, char **av)
{
    if (ac < 2)
    {
        std::cerr << "Usage: ./PMergeMe <sequence of positive integers>" << std::endl;
        return (EXIT_FAILURE);
    }
    if (containsDuplicates(av, ac))
    {
        std::cerr << "Usage: Duplicate numbers not allowed." << std::endl;
        return (EXIT_FAILURE);
    }
    for (int i = 1; i < ac; ++i)
    {
        if (!isValidNumber(av[i]))
        {
            std::cerr << "Error: Invalid input '" << av[i] << "'" << std::endl;
            return (EXIT_FAILURE);
        }
    }
    
    try
    {
        PmergeMe sorter;
        sorter.fillContainers(av + 1);
        sorter.sort();
    }
    catch (std::exception const &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
        return (EXIT_FAILURE);
    }
    
    return (EXIT_SUCCESS);
}

////////////////////////////////////////////////////////////////////////////////