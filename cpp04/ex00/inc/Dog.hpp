/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 19:07:37 by gude-cas          #+#    #+#             */
/*   Updated: 2024/04/14 16:39:29 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

class Dog : public Animal 
{
	public:
		Dog();
		Dog(const Dog &obj);
		Dog &operator=(const Dog &obj);
		~Dog();

		void makeSound() const;
};