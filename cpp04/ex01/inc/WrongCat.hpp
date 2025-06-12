/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 11:17:33 by gude-cas          #+#    #+#             */
/*   Updated: 2024/04/12 11:25:06 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal 
{
	public:
		WrongCat();
		WrongCat(const WrongCat &obj);
		WrongCat &operator=(const WrongCat &obj);
		~WrongCat();

		void makeSound() const;
};