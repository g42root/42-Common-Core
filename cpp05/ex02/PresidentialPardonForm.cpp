/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 15:22:39 by gude-cas          #+#    #+#             */
/*   Updated: 2025/04/11 16:34:36 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5) , target(NULL)
{
    std::cout << "[PresidentialPardonForm] Default constructor has been called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) : AForm("PresidentialPardonForm", 25, 5), target(target)
{
    std::cout << "[PresidentialPardonForm] Target constructor has been called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &obj) : AForm(obj.getName(), obj.getGradeToSign(), obj.getGradeToExec()), target(obj.getTarget())
{
    std::cout << "[PresidentialPardonForm] Copy constructor has been called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "[PresidentialPardonForm] Destructor has been called" << std::endl;
}

std::string const &PresidentialPardonForm::getTarget() const
{
    return (this->target);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    if (executor.getGrade() > this->getGradeToExec())
        throw (GradeTooLowException());
    else if (!this->getIsSigned())
        throw (FormNotSignedException());
    std::cout << this->target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &obj)
{
    this->AForm::operator=(obj);
    this->target = obj.getTarget();
    return (*this);
}
