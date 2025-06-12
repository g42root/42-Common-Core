/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 10:39:33 by gude-cas          #+#    #+#             */
/*   Updated: 2025/04/11 14:21:07 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("default"), isSigned(false), gradeToSign(1), gradeToExec(1)
{
    std::cout << "[Form] Default constructor has been called" << std::endl;
}

Form::Form(std::string const &name, int gradeToSign, int gradeToExec) : name(name), isSigned(false), gradeToSign(gradeToSign), gradeToExec(gradeToExec)
{
    std::cout << "[Form] Special constructor has been called" << std::endl;
    
    if (gradeToSign < 1)
        throw (GradeTooHighException());
    else if (gradeToSign > 150)
        throw (GradeTooLowException());
    
    if (gradeToExec < 1)
        throw (GradeTooHighException());
    else if (gradeToExec > 150)
        throw (GradeTooLowException());
}

Form::Form(Form const &obj) : name(obj.name), isSigned(obj.isSigned), gradeToSign(obj.gradeToSign), gradeToExec(obj.gradeToExec)
{
    std::cout << "[Form] Copy constructor has been called" << std::endl;
}

Form::~Form()
{
    std::cout << "[Form] Destructor has been called" << std::endl;
}

std::string const &Form::getName() const
{
    return (this->name);
}

bool Form::getIsSigned() const
{
    return (this->isSigned);
}

int Form::getGradeToSign() const
{
    return (this->gradeToSign);
}

int Form::getGradeToExec() const
{
    return (this->gradeToExec);
}

void Form::beSigned(Bureaucrat const &obj)
{
    if (obj.getGrade() > this->gradeToSign)
        throw (GradeTooLowException());
    this->isSigned = true;
}

Form &Form::operator=(Form const &obj)
{
    this->isSigned = obj.getIsSigned();
    return (*this);
}

const char *Form::GradeTooHighException::what() const throw()
{
    return ("Grade too High!");
}

const char *Form::GradeTooLowException::what() const throw()
{
    return ("Grade too Low!");
}

std::ostream &operator<<(std::ostream &out, Form const &obj)
{
    out << obj.getName() << ", grade to sign: " << obj.getGradeToSign() << ", grade to execute: " << obj.getGradeToExec() << ". Form ";
    if (obj.getIsSigned())
        out << "is signed.";
    else
        out << "isn't signed.";
    return out;
}
