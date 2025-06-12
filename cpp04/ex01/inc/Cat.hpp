/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 19:07:30 by gude-cas          #+#    #+#             */
/*   Updated: 2024/04/15 13:14:09 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal 
{
	private:
		Brain *brain;

	public:
		Cat();
		Cat(const Cat &obj);
		Cat &operator=(const Cat &obj);
		~Cat();

		void makeSound() const;
		Brain *getBrain() const;
};