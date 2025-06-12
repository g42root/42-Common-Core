/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 15:22:26 by gude-cas          #+#    #+#             */
/*   Updated: 2025/04/12 11:41:00 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("default"), grade(150)
{
	std::cout << "[Bureaucrat] Default constructor has been called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string const &name, int grade) : name(name)
{
	std::cout << "[Bureaucrat] Special constructor has been called" << std::endl;
	if (grade < 1)
		throw (GradeTooHighException());
	else if (grade > 150)
		throw (GradeTooLowException());
	this->grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &obj) : name(obj.name), grade(obj.grade)
{
	std::cout << "[Bureaucrat] Copy constructor has been called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "[Bureaucrat] Destructor has been called" << std::endl;
}

std::string const &Bureaucrat::getName() const
{
	return (this->name);
}

int const &Bureaucrat::getGrade() const
{
	return (this->grade);
}

void Bureaucrat::incrementGrade()
{
	if (this->grade - 1 < 1)
		throw (GradeTooHighException());
	this->grade--;
}

void Bureaucrat::decrementGrade()
{
	if (this->grade + 1 > 150)
		throw (GradeTooLowException());
	this->grade++;
}

void Bureaucrat::signForm(AForm &form)
{
	if (form.getIsSigned())
	{
		std::cout << this->getName() << " couldn't sign " << form.getName() << " because it's already signed" << std::endl;
		return ;
	}
	try
	{
		form.beSigned(*this);
		std::cout << this->getName() << " signed " << form.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << this->getName() << " couldn't sign " << form.getName() << " because grade is too low" << std::endl;
	}
}

void Bureaucrat::executeForm(AForm const &form)
{
    try
    {
        std::cout << this->name << " tries to execute " << form.getName() << std::endl;
        form.execute(*this);
        std::cout << this->name << " executed " << form. getName() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &obj)
{
	this->grade = obj.getGrade();
	return (*this);
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too High!");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too Low!");
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &obj)
{
	out << obj.getName() << ", bureaucrat grade " << obj.getGrade();
	return out;
}
