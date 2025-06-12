/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 11:02:50 by gude-cas          #+#    #+#             */
/*   Updated: 2024/04/11 15:33:42 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("default"), hitPoints(100), energyPoints(50), attackDamage(20)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(100), energyPoints(50), attackDamage(20)
{
	std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &obj)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = obj;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &obj)
{
	std::cout << "ClapTrap copy assignment operator called" << std::endl;
	if (this != &obj)
	{
		this->name = obj.name;
		this->hitPoints = obj.hitPoints;
		this->energyPoints = obj.energyPoints;
		this->attackDamage = obj.attackDamage;
	}
	return *this;
}

void ClapTrap::attack(const std::string &target)
{
	if (this->energyPoints <= 0)
	{
		std::cout << this->name << " has no energy left!" << std::endl;
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
		std::cout << this->name << " attacks " << target << " [" << this->energyPoints << " energy left]"<< std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount >= (unsigned int)this->hitPoints)
	{
		std::cout << this->name << " is dead!" << std::endl;
		this->hitPoints = 0;
		return ;
	}
	else
	{
		this->hitPoints -= amount;
		std::cout << this->name << " took " << amount << " points of damage!" << " [" << this->hitPoints << " hp left]" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hitPoints <= 0)
	{
		std::cout << this->name << " is dead, can't be saved!" << std::endl;
		return ;
	}
	else if (this->energyPoints <= 0)
	{
		std::cout << this->name << " has no energy left!" << std::endl;
		return ;
	}
	else
	{
		this->hitPoints += amount;
		this->energyPoints--;
		std::cout << this->name << " recovers " << amount << " hp!" << " [" << this->energyPoints << " energy left]" << std::endl;
	}
}