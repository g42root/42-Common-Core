/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 15:44:17 by gude-cas          #+#    #+#             */
/*   Updated: 2024/04/11 15:59:42 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap constructor called" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap(FragTrap const &obj) : ClapTrap(obj)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = obj;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &obj)
{
	std::cout << "FragTrap copy assignment operator called" << std::endl;
	if ( this != &obj)
	{
		this->name = obj.name;
		this->attackDamage = obj.attackDamage;
		this->energyPoints = obj.energyPoints;
		this->hitPoints = obj.hitPoints;
	}
	return *this;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << this-> name << " calls for a High Five" << std::endl;
}