/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 22:08:10 by gude-cas          #+#    #+#             */
/*   Updated: 2024/04/08 11:46:13 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::debug()
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info()
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning()
{
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error()
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
    int found = 0;
    void (Harl::*ptrs[4])() = {
        &Harl::debug, 
        &Harl::info, 
        &Harl::warning, 
        &Harl::error};
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    
    for(int i = 0; i < 4; i++)
    {
        if(!levels[i].compare(level))
        {
            (this->*ptrs[i])();
            found = 1;
            break ;
        }
    }
    if(!found)
        std::cerr << "Invalid complaint level! Usage: ./harl <DEBUG> or <INFO> or <WARNING> or <ERROR>" << std::endl;
}