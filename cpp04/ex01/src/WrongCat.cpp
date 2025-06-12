/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 11:18:03 by gude-cas          #+#    #+#             */
/*   Updated: 2024/04/15 13:16:44 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << BLUE "WrongCat default constructor called" R << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &obj) : WrongAnimal(obj)
{
	std::cout << YELLOW "WrongCat copy constructor called" R << std::endl;
	*this = obj;
}

WrongCat::~WrongCat()
{
	std::cout << RED "WrongCat default destructor called" R << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &obj)
{
	std::cout << GREEN "WrongCat copy assignment operator called" R << std::endl;
	if (this != &obj)
		this->type = obj.type;
	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << "💨 smelly cat 💨" << std::endl;
}