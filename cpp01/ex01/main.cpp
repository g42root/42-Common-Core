/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 15:47:24 by gude-cas          #+#    #+#             */
/*   Updated: 2024/04/07 15:17:01 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name);

int main(void)
{
    int n = 1;
    Zombie *horde = zombieHorde(n, "🧟 Zombie");
    
    for(int i = 0; i < n; i++)
        horde[i].announce();
    delete [] horde;
    
    return 0;
}