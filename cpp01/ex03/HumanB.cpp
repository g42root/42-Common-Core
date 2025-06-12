/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 17:44:35 by gude-cas          #+#    #+#             */
/*   Updated: 2024/04/07 15:37:06 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string &name) : name(name)
{
    this->weapon = NULL;
}

HumanB::~HumanB()
{
}

void HumanB::attack()
{
    std::cout << this->name << " attacks with his ";
    if(this->weapon)
        std::cout << this->weapon->getType() << std::endl;
    else
        std::cout << "bare hands" << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}