/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 22:08:03 by gude-cas          #+#    #+#             */
/*   Updated: 2024/04/06 22:30:39 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
    if(ac == 2)
    {
        Harl harl;
        harl.complain(av[1]);
        return 0;
    }
    else
    {
        std::cerr << "Usage: ./harl <level>" << std::endl;
        return 1;
    }
}