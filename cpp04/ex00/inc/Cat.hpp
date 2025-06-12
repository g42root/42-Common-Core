/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 19:07:30 by gude-cas          #+#    #+#             */
/*   Updated: 2024/04/14 16:39:34 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

class Cat : public Animal 
{
	public:
		Cat();
		Cat(const Cat &obj);
		Cat &operator=(const Cat &obj);
		~Cat();

		void makeSound() const;
};