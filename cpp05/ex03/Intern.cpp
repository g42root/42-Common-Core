/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 12:11:58 by gude-cas          #+#    #+#             */
/*   Updated: 2025/04/12 12:45:48 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
    std::cout << "[Intern] Default constructor has been called" << std::endl;
}

Intern::Intern(Intern const &obj)
{
    (void)obj;
    std::cout << "[Intern] Copy constructor has been called" << std::endl;
}

Intern::~Intern()
{
    std::cout << "[Intern] Destructor has been called" << std::endl;
}

static AForm *makeShrubbForm(std::string const &target)
{
    return (new ShrubberyCreationForm(target));
}

static AForm *makeRobotomyForm(std::string const &target)
{
    return (new RobotomyRequestForm(target));
}

static AForm *makePresidentialForm(std::string const &target)
{
    return (new PresidentialPardonForm(target));
}

AForm *Intern::makeForm(std::string const &name, std::string const &target) const
{
    AForm *(*listForms[])(std::string const &formTarget) = {&makeShrubbForm, &makeRobotomyForm, &makePresidentialForm};
    std::string forms[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    
    for (int i = 0; i < 3; i++)
    {
        if (name == forms[i])
        {
            std::cout << "Intern creates " << name << std::endl;
            return(listForms[i](target));
        }
    }
    
    std::cout << "Intern could not create form name " << name << std::endl;
    return (NULL);
}

Intern &Intern::operator=(Intern const &obj)
{
    (void)obj;
    return (*this);
}
