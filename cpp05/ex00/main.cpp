/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 12:29:44 by gude-cas          #+#    #+#             */
/*   Updated: 2025/04/12 13:35:56 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void) 
{
    try 
    {
        Bureaucrat bob("Bob", 151);
    } 
    catch (const std::exception &e) 
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << std::endl;
    
    try 
    {
        Bureaucrat bob("Bob", 0);
    } 
    catch (const std::exception &e) 
    {
        std::cerr << e.what() << std::endl;
    }
    
    std::cout << std::endl;

    Bureaucrat bob("Bob", 2);
    std::cout << bob << std::endl;
    try 
    {
        bob.incrementGrade();
        std::cout << bob << std::endl;
        bob.incrementGrade();
        std::cout << bob << std::endl;
    } 
    catch (const std::exception &e) 
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << std::endl;
    
    Bureaucrat marley("Marley", 149);
    std::cout << marley << std::endl;
    try 
    {
        marley.decrementGrade();
        std::cout << marley << std::endl;
        marley.decrementGrade();
        std::cout << marley << std::endl;
    } 
    catch (const std::exception &e) 
    {
        std::cerr << e.what() << std::endl;
    }
    
    std::cout << std::endl;

    return (0);
}
