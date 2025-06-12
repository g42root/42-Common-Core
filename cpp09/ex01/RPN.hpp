/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 11:11:28 by gude-cas          #+#    #+#             */
/*   Updated: 2025/05/07 14:02:21 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stack>
#include <cstdlib>
#include <iostream>

class RPN
{
    private:
        std::stack<int> stack;
        
    public:
        RPN();
        RPN(RPN const &obj);
        RPN &operator=(RPN const &obj);
        ~RPN();
        
        int computeExpression(std::string const &line);
        
        class IncorrectExpression : public std::exception
        {
            private:
                std::string msg;
            
            public:
                IncorrectExpression(std::string const &msg);
                virtual ~IncorrectExpression() throw();
                virtual const char *what() const throw();
        };
};
