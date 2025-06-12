/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 19:07:19 by gude-cas          #+#    #+#             */
/*   Updated: 2024/04/15 13:51:56 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"

Cat::Cat()
{
	std::cout << BLUE "Cat default constructor called" R << std::endl;
	this->brain = new Brain();
	this->type = "Cat";
}

Cat::Cat(const Cat &obj)
{
	std::cout << YELLOW "Cat copy constructor called" R << std::endl;
	this->type = obj.type;
	this->brain = new Brain();
	for(int i = 0; i < 100; i++)
		this->brain->setIdea(i, obj.brain->getIdea(i));
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << RED "Cat default destructor called" R << std::endl;
}

Cat &Cat::operator=(const Cat &obj)
{
	std::cout << GREEN "Cat copy assignment operator called" R << std::endl;
	if (this != &obj)
		this->type = obj.type;
	for(int i = 0; i < 100; i++)
		this->brain->setIdea(i, obj.brain->getIdea(i));
	return *this;
}

Brain *Cat::getBrain() const
{
	return this->brain;
}

void Cat::makeSound() const
{
	std::cout << "🐱 meowwww 🐱" << std::endl;
}