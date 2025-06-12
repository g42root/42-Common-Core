/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 12:12:14 by gude-cas          #+#    #+#             */
/*   Updated: 2025/04/12 14:48:01 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationFrom", 145, 137), target(NULL)
{
    std::cout << "[ShrubberyCreationForn] Default constructor has been called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) : AForm("ShrubberyCreationForm", 145, 137), target(target)
{
    std::cout << "[ShrubberyCreationForm] Target constructor has been called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &obj) : AForm(obj.getName(), obj.getGradeToSign(), obj.getGradeToExec()), target(obj.getTarget())
{
    std::cout << "[ShrubberyCreationForm] Copy constructor has been called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "[ShrubberyCreationForm] Destructor has been called" << std::endl;
}

std::string const &ShrubberyCreationForm::getTarget() const
{
    return (this->target);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    std::string      filename(target + "_shrubbery");
    std::ofstream    outfile;

    if (executor.getGrade() > this->getGradeToExec())
        throw (GradeTooLowException());
    if (!this->getIsSigned())
        throw (FormNotSignedException());

    outfile.open(filename.c_str());

    if (!outfile.is_open())
        std::cerr << "Shrubbery file: " << target << " could not be open..." << std::endl;
    else
    {
        for (int i = 0; i < 3; i++)
            outfile << TREE;
        outfile.close();
    }
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &obj)
{
    this->AForm::operator=(obj);
    this->target = obj.getTarget();
    return (*this);
}