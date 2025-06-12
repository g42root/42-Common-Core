/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 10:39:38 by gude-cas          #+#    #+#             */
/*   Updated: 2025/04/12 13:41:07 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	Bureaucrat	bob("Bob", 9);
	Bureaucrat  marley("Marley", 1);
	Form		a("Form-A", 8, 4);
	Form        b("Form-B", 12, 1);

	std::cout << std::endl;
	
	try
	{
		std::cout << bob << ", tries to sign " << a.getName() << std::endl;
		bob.signForm(a);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;
	
	try
	{
		std::cout << "Try to increment " << bob << std::endl;
		bob.incrementGrade();
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;
	
	try
	{
		std::cout << bob << ", tries to sign " << a.getName() << std::endl;
		bob.signForm(a);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;
	
	try
	{
		std::cout << bob << ", tries to sign " << a.getName() << std::endl;
		bob.signForm(a);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	std::cout << std::endl;
	
	try
	{
		std::cout << bob << ", tries to sign " << b.getName() << std::endl;
		bob.signForm(b);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	std::cout << std::endl;
	
	try
	{
		std::cout << marley << ", tries to sign " << b.getName() << std::endl;
		marley.signForm(b);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	std::cout << std::endl;

	return (0);
}
