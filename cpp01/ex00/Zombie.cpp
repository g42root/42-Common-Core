/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 18:50:25 by gude-cas          #+#    #+#             */
/*   Updated: 2024/04/08 12:24:58 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name(name)
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
