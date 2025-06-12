/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 11:02:28 by gude-cas          #+#    #+#             */
/*   Updated: 2024/04/11 16:30:51 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
	int dmg = 30;
	int repair = 20;

	ClapTrap quixote("Don Quixote");
	std::cout << std::endl;
	
	ScavTrap mill("Mill");
	std::cout << std::endl;
	
	FragTrap sancho("Sancho Panza");
	std::cout << std::endl;
	
	std::cout << "Damage set to " << dmg << " for ClapTrap" << std::endl;
	std::cout << std::endl;
	
	quixote.attack("Mill");
	mill.takeDamage(dmg);
	std::cout << std::endl;
	
	mill.guardGate();
	std::cout << std::endl;
	
	sancho.highFivesGuys();
	std::cout << std::endl;
	
	mill.attack("Don Quixote");
	quixote.takeDamage(dmg);
	std::cout << std::endl;
	
	sancho.attack("Mill");
	mill.takeDamage(dmg);
	std::cout << std::endl;
	
	mill.beRepaired(repair);
	std::cout << std::endl;
	
	quixote.attack("Mill");
	mill.takeDamage(dmg);
	std::cout << std::endl;
	
	sancho.attack("Mill");
	mill.takeDamage(dmg);
	std::cout << std::endl;

	return 0;
}
