/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 10:39:36 by gude-cas          #+#    #+#             */
/*   Updated: 2025/04/12 11:15:47 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        std::string const name;
        bool              isSigned;
        int const         gradeToSign;
        int const         gradeToExec;
    
    public:
        Form();
        Form(std::string const &name, int gradeToSign, int gradeToExec);
        Form(Form const &obj);
        ~Form();
        
    std::string const &getName() const;
    bool               getIsSigned() const;
    
    int                getGradeToSign() const;
    int                getGradeToExec() const;
    
    void               beSigned(Bureaucrat const &obj);
    
    Form &operator=(Form const &obj);
    
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

std::ostream &operator<<(std::ostream &out, Form const &obj);

#endif
