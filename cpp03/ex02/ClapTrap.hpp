/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 11:02:43 by gude-cas          #+#    #+#             */
/*   Updated: 2024/04/11 16:00:32 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class ClapTrap
{
	protected:
		std::string name;
		int hitPoints;
		int energyPoints;
		int attackDamage;
		
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &obj);
		ClapTrap &operator=(ClapTrap const &obj);
		~ClapTrap();
		
		virtual void attack(const std::string &target);
		virtual void takeDamage(unsigned int amount);
		virtual void beRepaired(unsigned int amount);
};
