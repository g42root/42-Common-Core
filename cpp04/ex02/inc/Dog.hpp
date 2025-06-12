/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 19:07:37 by gude-cas          #+#    #+#             */
/*   Updated: 2024/04/15 13:14:02 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal 
{
	private:
		Brain *brain;
	
	public:
		Dog();
		Dog(const Dog &obj);
		Dog &operator=(const Dog &obj);
		~Dog();

		void makeSound() const;
		Brain *getBrain() const;
};