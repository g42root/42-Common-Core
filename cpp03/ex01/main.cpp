/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 11:02:28 by gude-cas          #+#    #+#             */
/*   Updated: 2024/04/11 15:43:00 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	int dmg = 50;
	int repair = 20;
	
	ClapTrap quixote("Don Quixote");
	ScavTrap mill("Mill");

	std::cout << std::endl;
	std::cout << "Damage set to " << dmg << " for ClapTrap" << std::endl;
	std::cout << std::endl;
	
	quixote.attack("Mill");
	mill.takeDamage(dmg);
	std::cout << std::endl;

	mill.guardGate();
	std::cout << std::endl;
	
	mill.attack("Don Quixote");
	quixote.takeDamage(dmg);
	std::cout << std::endl;
	
	mill.beRepaired(repair);
	std::cout << std::endl;
	
	mill.attack("Don Quixote");
	quixote.takeDamage(dmg);
	std::cout << std::endl;
	
	return 0;
}
