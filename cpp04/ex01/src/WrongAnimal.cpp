/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 11:17:54 by gude-cas          #+#    #+#             */
/*   Updated: 2024/04/15 13:16:34 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << BLUE "WrongAnimal default constructor called" R << std::endl;
	this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj)
{
	std::cout << YELLOW "WrongAnimal copy constructor called" R << std::endl;
	*this = obj;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << RED "WrongAnimal default destructor called" R << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &obj)
{
	std::cout << GREEN "WrongAnimal copy assignment operator called" R << std::endl;
	if (this != &obj)
		this->type = obj.type;
	return *this;
}

void WrongAnimal::makeSound() const
{
	std::cout << "🚨 wronganimal 🚨" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return(this->type);
}