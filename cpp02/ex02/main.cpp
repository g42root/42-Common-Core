/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 16:26:21 by gude-cas          #+#    #+#             */
/*   Updated: 2024/04/10 10:48:19 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void) 
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	
	std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    
    std::cout << std::endl;

	std::cout << "++a: " << ++a << std::endl;
	
    std::cout << std::endl;

	std::cout << "a++ action: " << a++ << std::endl;
	std::cout << "a++ result: " << a << std::endl;
    
    std::cout << std::endl;
    
    std::cout << "--a: " << --a << std::endl;
    
    std::cout << std::endl;

    std::cout << "a-- action: " << a-- << std::endl;
	std::cout << "a-- result: " << a << std::endl;
    
    std::cout << std::endl;
    
	std::cout << "max: " << Fixed::max(a, b) << std::endl;
	std::cout << "min: " << Fixed::min(a, b) << std::endl;
	
	return 0;
}

// int main(void) 
// {
//     Fixed a(2.5f);
//     Fixed b(3.7f);
//     Fixed c(2.5f);
    
//     /* Greater than > */
//     std::cout << "a > b: " << (a > b) << std::endl; /* Expected output: 0 */
//     std::cout << "b > a: " << (b > a) << std::endl; /* Expected output: 1 */
    
//     /* Less than < */
//     std::cout << "a < b: " << (a < b) << std::endl; /* Expected output: 1 */
//     std::cout << "b < a: " << (b < a) << std::endl; /* Expected output: 0 */
    
//     /* Greater than or equal to >= */
//     std::cout << "a >= b: " << (a >= b) << std::endl; /* Expected output: 0 */
//     std::cout << "b >= a: " << (b >= a) << std::endl; /* Expected output: 1 */
//     std::cout << "a >= c: " << (a >= c) << std::endl; /* Expected output: 1 */
    
//     /* Less than or equal to <= */
//     std::cout << "a <= b: " << (a <= b) << std::endl; /* Expected output: 1 */
//     std::cout << "b <= a: " << (b <= a) << std::endl; /* Expected output: 0 */
//     std::cout << "a <= c: " << (a <= c) << std::endl; /* Expected output: 1 */
    
//     /* Equal to == */
//     std::cout << "a == b: " << (a == b) << std::endl; /* Expected output: 0 */
//     std::cout << "a == c: " << (a == c) << std::endl; /* Expected output: 1 */
    
//     /* Not equal to != */
//     std::cout << "a != b: " << (a != b) << std::endl; /* Expected output: 1 */
//     std::cout << "a != c: " << (a != c) << std::endl; /* Expected output: 0 */
    
//     /* Addition + */
//     std::cout << "a + b: " << (a + b) << std::endl; /* Expected output: 6.2 */
    
//     /* Subtraction - */
//     std::cout << "a - b: " << (a - b) << std::endl; /* Expected output: -1.2 */
    
//     /* Multiplication * */
//     std::cout << "a * b: " << (a * b) << std::endl; /* Expected output: 9.25 */
    
//     /* Division / */
//     std::cout << "a / b: " << (a / b) << std::endl; /* Expected output: 0.675 */
    
//     return 0;
// }