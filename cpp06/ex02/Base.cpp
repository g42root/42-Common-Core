/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 15:29:22 by gude-cas          #+#    #+#             */
/*   Updated: 2025/04/15 11:55:03 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base()
{
    std::cout << "Destructor has been called" << std::endl;
}

Base *generate(void)
{
    int value = std::rand() % 3;
    
    if (value == 0)
        return (new A());
    else if (value == 1)
        return (new B());
    else
        return (new C());
}

// identify by pointer
void identify(Base *ptr)
{
    if (dynamic_cast<A*>(ptr))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(ptr))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(ptr))
        std::cout << "C" << std::endl;
    else
        std::cout << "Not A, B or C" << std::endl;
}

// identify by reference
void identify(Base &ptr)
{
    try
    {
        (void)dynamic_cast<A&>(ptr);
        std::cout << "A" << std::endl;
    }
    catch (std::exception &e)
    {
        try
        {
            (void)dynamic_cast<B&>(ptr);
            std::cout << "B" << std::endl;
        }
        catch (std::exception &e)
        {
            try
            {
                (void)dynamic_cast<C&>(ptr);
                std::cout << "C" << std::endl;
            }
            catch (std::exception &e)
            {
                std::cout << "Not A, B or C" << std::endl;
            }
        }
    }
}
