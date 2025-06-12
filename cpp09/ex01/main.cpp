/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 11:11:22 by gude-cas          #+#    #+#             */
/*   Updated: 2025/05/10 11:31:46 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cerr << "Error: program only works with one argument provided!" << std::endl;
        return (EXIT_FAILURE);
    }
    
    RPN expression;
    try
    {
        std::cout << expression.computeExpression(av[1]) << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    return (EXIT_SUCCESS);
}
