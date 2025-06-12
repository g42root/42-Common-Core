/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 15:47:40 by gude-cas          #+#    #+#             */
/*   Updated: 2024/04/07 15:13:11 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
    std::cout << name << " 💥 obliterated 💥" << std::endl;
}

void Zombie::announce()
{
    std::cout << name << ": 🧠 BraiiiiiiinnnzzzZ... 🍴" << std::endl;
}

void Zombie::setName(std::string name)
{
    this->name = name;
}