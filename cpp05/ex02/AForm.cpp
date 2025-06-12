/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 15:22:23 by gude-cas          #+#    #+#             */
/*   Updated: 2025/04/12 11:39:37 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : name("default"), isSigned(false), gradeToSign(1), gradeToExec(1)
{
    std::cout << "[AForm] Default constructor has been called" << std::endl;
}

AForm::AForm(std::string const &name, int gradeToSign, int gradeToExec) : name(name), isSigned(false), gradeToSign(gradeToSign), gradeToExec(gradeToExec)
{
    std::cout << "[AForm] Special constructor has been called" << std::endl;
    
    if (gradeToSign < 1)
        throw (GradeTooHighException());
    else if (gradeToSign > 150)
        throw (GradeTooLowException());
    
    if (gradeToExec < 1)
        throw (GradeTooHighException());
    else if (gradeToExec > 150)
        throw (GradeTooLowException());
}

AForm::AForm(AForm const &obj) : name(obj.name), isSigned(obj.isSigned), gradeToSign(obj.gradeToSign), gradeToExec(obj.gradeToExec)
{
    std::cout << "[AForm] Copy constructor has been called" << std::endl;
}

AForm::~AForm()
{
    std::cout << "[AForm] Destructor has been called" << std::endl;
}

std::string const &AForm::getName() const
{
    return (this->name);
}

bool AForm::getIsSigned() const
{
    return (this->isSigned);
}

int AForm::getGradeToSign() const
{
    return (this->gradeToSign);
}

int AForm::getGradeToExec() const
{
    return (this->gradeToExec);
}

void AForm::beSigned(Bureaucrat const &obj)
{
    if (obj.getGrade() > this->gradeToSign)
        throw (GradeTooLowException());
    this->isSigned = true;
}

AForm &AForm::operator=(AForm const &obj)
{
    this->isSigned = obj.getIsSigned();
    return (*this);
}

const char *AForm::GradeTooHighException::what() const throw()
{
    return ("Grade too High!");
}

const char *AForm::GradeTooLowException::what() const throw()
{
    return ("Grade too Low!");
}

const char *AForm::FormNotSignedException::what() const throw()
{
    return("Form not signed!");
}

std::ostream &operator<<(std::ostream &out, AForm const &obj)
{
    out << obj.getName() << ", grade to sign: " << obj.getGradeToSign() << ", grade to execute: " << obj.getGradeToExec() << ". AForm ";
    if (obj.getIsSigned())
        out << "is signed.";
    else
        out << "isn't signed.";
    return out;
}
