/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 19:07:19 by gude-cas          #+#    #+#             */
/*   Updated: 2024/04/15 13:02:36 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"
#include "../inc/Colors.hpp"

Cat::Cat() : Animal()
{
	std::cout << BLUE "Cat default constructor called" R << std::endl;
	this->type = "Cat";
}

Cat::Cat(const Cat &obj) : Animal(obj)
{
	std::cout << YELLOW "Cat copy constructor called" R << std::endl;
	*this = obj;
}

Cat::~Cat()
{
	std::cout << RED "Cat default destructor called" R << std::endl;
}

Cat &Cat::operator=(const Cat &obj)
{
	std::cout << GREEN "Cat copy assignment operator called" R << std::endl;
	if (this != &obj)
		this->type = obj.type;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "🐱 meowwww 🐱" << std::endl;
}