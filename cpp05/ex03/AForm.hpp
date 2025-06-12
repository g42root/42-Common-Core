/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 12:11:51 by gude-cas          #+#    #+#             */
/*   Updated: 2025/04/12 12:12:42 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    private:
        std::string const name;
        bool              isSigned;
        int const         gradeToSign;
        int const         gradeToExec;
    
    public:
        AForm();
        AForm(std::string const &name, int gradeToSign, int gradeToExec);
        AForm(AForm const &obj);
        virtual ~AForm();
        
    std::string const &getName() const;
    bool               getIsSigned() const;
    
    int                getGradeToSign() const;
    int                getGradeToExec() const;
    
    void               beSigned(Bureaucrat const &obj);
    
    virtual void       execute(Bureaucrat const &executor) const = 0;
    
    AForm &operator=(AForm const &obj);
    
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
    
    class FormNotSignedException : public std::exception
    {
        public:
            virtual const char *what() const throw();
    };
};

std::ostream &operator<<(std::ostream &out, AForm const &obj);

#endif