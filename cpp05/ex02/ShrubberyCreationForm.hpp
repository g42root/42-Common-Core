/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 15:22:51 by gude-cas          #+#    #+#             */
/*   Updated: 2025/04/12 14:41:29 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <fstream>
#include "AForm.hpp"

#define TREE \
"      /\\      \n"\
"     /\\*\\     \n"\
"    /\\O\\*\\    \n"\
"   /*/\\/\\/\\   \n"\
"  /\\O\\/\\*\\/\\  \n"\
" /\\*\\/\\*\\/\\/\\ \n"\
"/\\O\\/\\/*/\\/O/\\\n"\
"      ||      \n"\
"      ||      \n"\
"      ||      \n"


      
class ShrubberyCreationForm : public AForm
{
    private:
        std::string target;
        
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string const &target);
        ShrubberyCreationForm(ShrubberyCreationForm const &obj);
        virtual ~ShrubberyCreationForm();
        
    virtual void       execute(Bureaucrat const &executor) const;
    std::string const &getTarget() const;
    
    ShrubberyCreationForm &operator=(ShrubberyCreationForm const &obj);
};

#endif
