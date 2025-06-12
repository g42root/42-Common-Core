/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 14:09:05 by gude-cas          #+#    #+#             */
/*   Updated: 2024/04/11 15:41:17 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string const &name) : ClapTrap(name)
{
	std::cout << "ScavTrap constructor called" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap const &obj) : ClapTrap(obj)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = obj;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &obj)
{
	std::cout << "ScavTrap copy assignment operator called" << std::endl;
	if (this != &obj)
	{
		this->name = obj.name;
		this->hitPoints = obj.hitPoints;
		this->energyPoints = obj.energyPoints;
		this->attackDamage = obj.attackDamage;
	}
	return *this;
}

void ScavTrap::attack(const std::string &target)
{
	if (this->energyPoints <= 0)
	{
		std::cout << this->name << " has no energy left !" << std::endl;
		return ;
	}
	else if (this->hitPoints <= 0)
	{
		std::cout << this->name << " has no hp left!" << std::endl;
		return ;
	}
	else
	{
		this->energyPoints--;
		std::cout << "ScavTrap " << this->name << " attacks " << target << " [" << this->energyPoints << " energy left]"<< std::endl;
	}
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is in Gate keeper mode" << std::endl;
}