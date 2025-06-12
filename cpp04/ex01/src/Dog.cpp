/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 19:07:14 by gude-cas          #+#    #+#             */
/*   Updated: 2024/04/15 13:51:52 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

Dog::Dog()
{
	std::cout << BLUE "Dog default constructor called" R << std::endl;
	this->brain = new Brain();
	this->type = "Dog";
}

Dog::Dog(const Dog &obj)
{
	std::cout << YELLOW "Dog copy constructor called" R << std::endl;
	this->type = obj.type;
	this->brain = new Brain();
	for(int i = 0; i < 100; i++)
		this->brain->setIdea(i, obj.brain->getIdea(i));
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << RED "Dog default destructor called" R << std::endl;
}

Dog &Dog::operator=(const Dog &obj)
{
	std::cout << GREEN "Dog copy assignment operator called" R << std::endl;
	this->type = obj.type;
	for(int i = 0; i < 100; i++)
		this->brain->setIdea(i, obj.brain->getIdea(i));
	return *this;
}

Brain *Dog::getBrain() const
{
	return this->brain;
}

void Dog::makeSound() const
{
	std::cout << "🐶 woof woof 🐶" << std::endl;
}
