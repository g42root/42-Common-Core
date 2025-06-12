/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 11:11:25 by gude-cas          #+#    #+#             */
/*   Updated: 2025/05/10 11:35:01 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(RPN const &obj) : stack(obj.stack) {}

RPN &RPN::operator=(RPN const &obj) { this->stack = obj.stack; return (*this); }

RPN::~RPN() {}

static bool isSymbol(char c)
{
    if (c == '+' || c == '-' || c == '*' || c == '/')
        return (true);
    return (false);
}

static bool correctLine(std::string const &line)
{
    for (int i = 0; line[i]; i++)
        if (!isdigit(line[i]) && !isspace(line[i]) && !isSymbol(line[i]))
            return (false);
    return (true);
}

int RPN::computeExpression(std::string const &line)
{
    if (line.empty() || !correctLine(line))
        throw (IncorrectExpression("invalid input"));

    for (int i = 0; line[i]; i++)
    {
        if (isdigit(line[i]))
            this->stack.push(line[i] - '0');
        else if (isSymbol(line[i]))
        {
            if (this->stack.size() < 2)
                throw (IncorrectExpression("symbol not expected"));
                
            int res = 0;
            int b = this->stack.top();
            this->stack.pop();
            int a = this->stack.top();
            this->stack.pop();
            
            switch (line[i])
            {
                case '+':
                {
                    res = a + b;
                    break ;
                }
                case '-':
                {
                    res = a - b;
                    break;
                }
                case '*':
                {
                    res = a * b;
                    break ;
                }
                case '/':
                {
                    if (b == 0)
                        throw (IncorrectExpression("division by zero"));
                    res = a / b;
                    break ;
                }
            }
            this->stack.push(res);
        }
    }
    
    if (this->stack.size() != 1)
        throw (IncorrectExpression("invalid input"));
    return (this->stack.top());
}

RPN::IncorrectExpression::IncorrectExpression(std::string const &msg) : msg ("Error: " + msg) {}

RPN::IncorrectExpression::~IncorrectExpression() throw() {}

const char *RPN::IncorrectExpression::what() const throw() { return (this->msg.c_str()); }
