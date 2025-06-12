/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 11:17:45 by gude-cas          #+#    #+#             */
/*   Updated: 2024/04/15 13:06:35 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"

Animal::Animal()
{
	std::cout << BLUE "Animal default constructor called" R << std::endl;
	this->type = "Animal";
}

Animal::Animal(const Animal &obj)
{
	std::cout << YELLOW "Animal copy constructor called" R << std::endl;
	*this = obj;
}

Animal::~Animal()
{
	std::cout << RED "Animal default destructor called" R << std::endl;
}

Animal &Animal::operator=(const Animal &obj)
{
	std::cout << GREEN "Animal copy assignment operator called" R << std::endl;
	if (this != &obj)
		this->type = obj.type;
	return *this;
}

void Animal::makeSound() const
{
	std::cout << "🐻 raaaawwwwrrrr 🐻" << std::endl;
}

std::string Animal::getType() const
{
	return(this->type);
}