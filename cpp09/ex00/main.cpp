/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 15:32:04 by gude-cas          #+#    #+#             */
/*   Updated: 2025/05/10 11:13:17 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cerr << "Error: could not open file." << std::endl;
        return (EXIT_FAILURE);
    }
    
    BitcoinExchange converter;
    if (!converter.setData("data.csv"))
        return (EXIT_FAILURE);
    converter.convertValue(av[1]);
    return (EXIT_SUCCESS);
}
