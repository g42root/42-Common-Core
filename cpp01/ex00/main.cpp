/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 19:01:49 by gude-cas          #+#    #+#             */
/*   Updated: 2024/04/07 15:17:26 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *newZombie(std::string name);
void randomChump(std::string name);
        
int main(void)
{
    Zombie *alfred = newZombie("🧟 Alfred"); 
    alfred->announce();
    
    randomChump("🧟 Fred");

    delete alfred;
    
    return 0;
}
