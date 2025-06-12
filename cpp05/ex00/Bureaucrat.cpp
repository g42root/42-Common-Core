/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 12:29:52 by gude-cas          #+#    #+#             */
/*   Updated: 2025/04/12 11:15:01 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("default"), grade(150)
{
	std::cout << "Default constructor has been called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string const &name, int grade) : name(name)
{
	std::cout << "Special constructor has been called" << std::endl;
	if (grade < 1)
		throw (GradeTooHighException());
	else if (grade > 150)
		throw (GradeTooLowException());
	this->grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &obj) : name(obj.name), grade(obj.grade)
{
	std::cout << "Copy constructor has been called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor has been called" << std::endl;
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
