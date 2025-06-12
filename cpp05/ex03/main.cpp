/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 12:12:04 by gude-cas          #+#    #+#             */
/*   Updated: 2025/04/12 14:50:50 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
    Intern intern;
    Bureaucrat bob("Bob", 1);
   
    std::cout << std::endl;
    AForm  *shrub(intern.makeForm("shrubbery creation", "ShrubTarget"));
    AForm  *robot(intern.makeForm("robotomy request", "RobotTarget"));
    AForm  *pardon(intern.makeForm("presidential pardon", "PardonTarget"));
    
    std::cout << std::endl;
    intern.makeForm("test", "test");
    
    std::cout << std::endl;
    bob.signForm(*shrub);
    bob.signForm(*robot);
    bob.signForm(*pardon);
    
    std::cout << std::endl;
    bob.executeForm(*shrub);
    std::cout << std::endl;
    bob.executeForm(*robot);
    std::cout << std::endl;
    bob.executeForm(*pardon);
    
    std::cout << std::endl;
    
    delete shrub;
    delete robot;
    delete pardon;
}
