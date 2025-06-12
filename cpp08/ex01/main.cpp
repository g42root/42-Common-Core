/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 17:01:27 by gude-cas          #+#    #+#             */
/*   Updated: 2025/04/17 12:11:24 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
    srand(time(NULL));
    
    std::cout << GREEN "(1) Basic Span Test" R << std::endl;
    try
    {
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        
        std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr <<e.what() << std::endl;
    }
    
    std::cout << std::endl;
    std::cout << GREEN "(2) Span Overflow Test" R << std::endl;
    try
    {
        Span sp = Span(3);
        sp.addNumber(1);
        sp.addNumber(2);
        sp.addNumber(3);
        sp.addNumber(4); // should throw
    }
    catch (std::exception &e)
    {
        std::cerr <<e.what() << std::endl;
    }
    
    std::cout << std::endl;
    std::cout << GREEN "(3) Not Enough Numbers Test" R << std::endl;
    try
    {
        Span sp = Span(1);
        sp.addNumber(42);
        std::cout << sp.shortestSpan() << std::endl; // should throw
    }
    catch (std::exception &e)
    {
        std::cerr <<e.what() << std::endl;
    }
    
    std::cout << std::endl;
    std::cout << GREEN "(4) Huge Span (10000 elements)" R << std::endl;
    try
    {
        Span sp = Span(10000);
        std::vector<int> nbs;
        for (int i = 0; i < 10000; i++)
            nbs.push_back(rand());
        sp.addRange(nbs.begin(), nbs.end());
        
        std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr <<e.what() << std::endl;
    }
    
    std::cout << std::endl;
    std::cout << GREEN "(5) Copy Constructor / Assignment Operator Test" R << std::endl;
    try
    {
        Span spSrc(1337);
        spSrc.addNumber(10);
        spSrc.addNumber(20);
        spSrc.addNumber(30);
        
        Span spCopy(spSrc);
        Span spAssign = spSrc;

        std::cout << "Copy Shortest Span: " << spCopy.shortestSpan() << std::endl;
        std::cout << "Assigned Longest Span: " << spAssign.longestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr <<e.what() << std::endl;
    }
    
    return (0);
}
