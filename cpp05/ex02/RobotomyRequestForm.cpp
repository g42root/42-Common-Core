/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 15:22:44 by gude-cas          #+#    #+#             */
/*   Updated: 2025/04/12 14:20:23 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"	

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), target(NULL)
{
    srand(time(NULL));
    std::cout << "[RobotomyRequestForm] Default constructor has been called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : AForm("RobotomyRequestForm", 72, 45), target(target)
{
    srand(time(NULL));
    std::cout << "[RobotomyRequestForm] Target constructor has been called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &obj) : AForm(obj.getName(), obj.getGradeToSign(), obj.getGradeToExec()), target(obj.getTarget())
{
    std::cout << "[RobotomyRequestForm] Copy constructor has been called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "[RobotomyRequestForm] Destructor has been called" << std::endl;
}

std::string const &RobotomyRequestForm::getTarget() const
{
    return (this->target);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    if (executor.getGrade() > this->getGradeToExec())
        throw (GradeTooLowException());
    else if (!this->getIsSigned())
        throw (FormNotSignedException());
        
    if (rand() % 2)
        std::cout << " * Drrrrrrrrwwwwwwwrrrrrrrrdrrrr * " << this->target << " has been robotomized successfully!" << std::endl;
    else
        std::cout << "Failed to robotomize " << this->target << "!" << std::endl; 
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &obj)
{
    this->AForm::operator=(obj);
    this->target = obj.getTarget();
    return (*this);
}
