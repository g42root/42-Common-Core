/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 15:22:29 by gude-cas          #+#    #+#             */
/*   Updated: 2025/04/12 13:15:10 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	Bureaucrat				bob("Bob", 3);
	Bureaucrat				marley("Marley", 137);
	ShrubberyCreationForm	shrub("ShrubTarget");
	RobotomyRequestForm		robot("RobotTarget");
	PresidentialPardonForm	pardon("PardonTarget");

	std::cout << std::endl;
	bob.executeForm(shrub);
	bob.executeForm(robot);
	bob.executeForm(pardon);

	std::cout << std::endl;
	marley.signForm(shrub);
	marley.signForm(robot);
	marley.signForm(pardon);

	std::cout << std::endl;
	bob.signForm(shrub);
	bob.signForm(robot);
	bob.signForm(pardon);

	std::cout << std::endl;
	marley.executeForm(shrub);
	marley.executeForm(robot);
	marley.executeForm(pardon);

	std::cout << std::endl;
	bob.executeForm(shrub);
	bob.executeForm(robot);
	bob.executeForm(pardon);

	std::cout << std::endl;

	return (0);
}
