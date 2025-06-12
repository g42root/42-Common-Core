/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 12:12:01 by gude-cas          #+#    #+#             */
/*   Updated: 2025/04/12 12:27:19 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
    private:

    public:
        Intern();
        Intern(Intern const &obj);
        ~Intern();
        
        AForm *makeForm(std::string const &name, std::string const &target) const;
        
        Intern &operator=(Intern const &obj);
};

#endif
