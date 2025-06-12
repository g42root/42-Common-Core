/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 14:09:27 by gude-cas          #+#    #+#             */
/*   Updated: 2024/04/11 15:40:17 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{		
	public:
		ScavTrap();
		ScavTrap(std::string const &name);
		ScavTrap(ScavTrap const &obj);
		ScavTrap &operator=(ScavTrap const &obj);
		~ScavTrap();

		void attack(const std::string &target);
		void guardGate();
};