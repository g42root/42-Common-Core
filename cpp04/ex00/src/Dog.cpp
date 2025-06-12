/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 19:07:14 by gude-cas          #+#    #+#             */
/*   Updated: 2024/04/15 13:02:14 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"
#include "../inc/Colors.hpp"

Dog::Dog() : Animal()
{
	std::cout << BLUE "Dog default constructor called" R << std::endl;
	this->type = "Dog";
}

Dog::Dog(const Dog &obj) : Animal(obj)
{
	std::cout << YELLOW "Dog copy constructor called" R << std::endl;
	*this = obj;
}

Dog::~Dog()
{
	std::cout << RED "Dog default destructor called" R << std::endl;
}

Dog &Dog::operator=(const Dog &obj)
{
	std::cout << GREEN "Dog copy assignment operator called" R << std::endl;
	if (this != &obj)
		this->type = obj.type;
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "🐶 woof woof 🐶" << std::endl;
}
