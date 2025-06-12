/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:11:19 by gude-cas          #+#    #+#             */
/*   Updated: 2024/04/09 20:01:50 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void) 
{
	Fixed a; /* default constructor */
	std::cout << std::endl;
	
	Fixed const b (10); /* int constructor */
	std::cout << std::endl;
	
	Fixed const c(42.42f); /* float constructor */
	std::cout << std::endl;
	
	Fixed const d(b); /* copy constructor */
	std::cout << std::endl;
	
	a = Fixed(1234.4321f); /* copy assignment operator */
	std::cout << std::endl;
	
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;

	std::cout << std::endl;
	
	return 0; 
}