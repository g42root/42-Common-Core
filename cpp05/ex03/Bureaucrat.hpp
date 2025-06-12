/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 12:11:56 by gude-cas          #+#    #+#             */
/*   Updated: 2025/04/12 12:12:58 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
    private:
        std::string const name;
        int               grade;
    
    public:
        Bureaucrat();
        Bureaucrat(std::string const &name, int grade);
        Bureaucrat(Bureaucrat const &obj);
        ~Bureaucrat();

        std::string const &getName() const;
        int const         &getGrade() const;
        
        void              incrementGrade();
        void              decrementGrade();
        
        void              signForm(AForm &form);
        void              executeForm(AForm const &form);

        Bureaucrat &operator=(Bureaucrat const &obj);

        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };

        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &obj);

#endif