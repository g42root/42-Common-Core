/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 13:43:22 by gude-cas          #+#    #+#             */
/*   Updated: 2024/04/15 13:06:12 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Brain.hpp"

Brain::Brain()
{
	std::cout << BLUE "Brain default constructor called" R << std::endl;
}

Brain::Brain(const Brain &obj)
{
	std::cout << YELLOW "Brain copy constructor called" R << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = obj.ideas[i];
}

Brain::~Brain()
{
	std::cout << RED "Brain default destructor called" R << std::endl;
}

Brain &Brain::operator=(const Brain &obj)
{
	std::cout << GREEN "Brain copy assignment operator called" R << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = obj.ideas[i];
	return *this;
}

std::string Brain::getIdea(int i) const
{
	return this->ideas[i];
}

void Brain::setIdea(int i, std::string idea)
{
	if (i < 0 || i > 99)
	{
		std::cout << "Invalid index";
		return ;
	}
	this->ideas[i] = idea;
}