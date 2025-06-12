/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 11:02:28 by gude-cas          #+#    #+#             */
/*   Updated: 2024/04/11 15:21:20 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	int dmg = 8;
	int repair = 5;

	ClapTrap quixote("Don Quixote");
	ClapTrap mill("Mill");
	
	std::cout << std::endl;
	std::cout << "Damage has been set to " << dmg << std::endl;
	std::cout << std::endl;
	
	quixote.attack("Mill");
	mill.takeDamage(dmg);
	std::cout << std::endl;
	
	mill.beRepaired(repair);
	std::cout << std::endl;

	mill.attack("Don Quixote");
	quixote.takeDamage(dmg);
	std::cout << std::endl;

	quixote.attack("Mill");
	mill.takeDamage(dmg);
	std::cout << std::endl;
	
	return 0;
}