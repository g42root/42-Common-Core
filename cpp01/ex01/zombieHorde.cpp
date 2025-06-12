/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 15:47:49 by gude-cas          #+#    #+#             */
/*   Updated: 2024/04/07 15:17:16 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
    if(N <= 0)
    {
        std::cout << "A minimum amount of zombies is required to establish a horde" << std::endl;
        return NULL;
    }
    
    Zombie *horde = new Zombie[N];
    for(int i = 0; i < N; i++)
        horde[i].setName(name);
    return horde;
}