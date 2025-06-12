/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 12:13:19 by gude-cas          #+#    #+#             */
/*   Updated: 2025/04/12 12:13:20 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
    private:
        std::string target;
        
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string const &target);
        PresidentialPardonForm(PresidentialPardonForm const &obj);
        virtual ~PresidentialPardonForm();
        
        virtual void execute(Bureaucrat const &executor) const;
        std::string const &getTarget() const;
        
        PresidentialPardonForm &operator=(PresidentialPardonForm const &obj);
};

#endif