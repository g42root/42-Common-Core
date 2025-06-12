/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 11:17:09 by gude-cas          #+#    #+#             */
/*   Updated: 2024/04/14 16:21:33 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "Colors.hpp"

class Animal
{
	protected:
		std::string type;

	public:
		Animal();
		Animal(const Animal &obj);
		Animal &operator=(const Animal &obj);
		virtual ~Animal();

		virtual void makeSound() const;
		std::string getType() const;
};

#endif