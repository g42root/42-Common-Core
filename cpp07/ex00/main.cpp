/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 15:29:14 by gude-cas          #+#    #+#             */
/*   Updated: 2025/04/15 19:30:48 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main(void)
{
	int a = 42;
	int b = 1337;
	std::string c = "Bob";
	std::string d = "Bobi";
	
	std::cout << "a:" << a << std::endl;
	std::cout << "b:" << b << std::endl;
	::swap(a, b);
	std::cout << "*SWAP*" << std::endl;
	std::cout << "a:" << a << std::endl;
	std::cout << "b:" << b << std::endl;
	
	std::cout << std::endl;
	
	std::cout << "c:" << c << std::endl;
	std::cout << "d:" << d << std::endl;
	::swap(c, d);
	std::cout << "*SWAP*" << std::endl;
	std::cout << "c:" << c << std::endl;
	std::cout << "d:" << d << std::endl;
	
	std::cout << std::endl;
	
	std::cout << "a:" << a << std::endl;
	std::cout << "b:" << b << std::endl;
	std::cout << "*MIN*" << std::endl;
	std::cout << ::min(a, b) << std::endl;
	
	std::cout << std::endl;
	
	std::cout << "c:" << c << std::endl;
	std::cout << "d:" << d << std::endl;
	std::cout << "*MAX*" << std::endl;
	std::cout << ::max(c, d) << std::endl;

	return (0);
}
