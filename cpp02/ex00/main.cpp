/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 22:43:48 by gude-cas          #+#    #+#             */
/*   Updated: 2024/04/10 10:57:28 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void) 
{
	Fixed a;
	std::cout << std::endl;
	Fixed b (a);
	std::cout << std::endl;
	Fixed c;
	std::cout << std::endl;
	c = b;
	std::cout << std::endl;
	
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	
	std::cout << std::endl;
	
	return 0; 
}