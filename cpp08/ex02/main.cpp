/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 11:44:35 by gude-cas          #+#    #+#             */
/*   Updated: 2025/04/19 13:44:51 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main(void)
{
    std::cout << GREEN "(1) MutantStack Basic Functionality" R << std::endl;
    MutantStack<int> mstack;

    mstack.push(10);
    mstack.push(20);
    mstack.push(30);
    mstack.push(40);

    std::cout << "Top element: " << mstack.top() << std::endl;
    std::cout << "Size: " << mstack.size() << std::endl;
    std::cout << std::endl;
    
    mstack.pop();
    std::cout << "Top element after pop: " << mstack.top() << std::endl;
    std::cout << "Size: " << mstack.size() << std::endl;

    mstack.push(40);
    mstack.push(50);
    mstack.push(60);

    std::cout << std::endl;
    std::cout << GREEN "(2) Iterating through MutantStack" R << std::endl;
    for (MutantStack<int>::iterator i = mstack.begin(); i != mstack.end(); i++)
        std::cout << *i << std::endl;

    std::cout << std::endl;
    std::cout << GREEN "(3) Copy Constructor / Assignment Operator Test" R << std::endl;
    MutantStack<int> msCopy(mstack);
    MutantStack<int> msAssign;
    msAssign = mstack;
    
    std::cout << "Copy stack: ";
    for (MutantStack<int>::iterator i = msCopy.begin(); i != msCopy.end(); ++i)
        std::cout << *i << " ";
    std::cout << std::endl;
  
    std::cout << "Assigned stack: ";
    for (MutantStack<int>::iterator i = msAssign.begin(); i != msAssign.end(); ++i)
        std::cout << *i << " ";
    std::cout << std::endl;

    std::cout << std::endl;
    std::cout << GREEN "(4) Compare with std::list" R << std::endl;
    std::list<int> lst;
    lst.push_back(10);
    lst.push_back(20);
    lst.push_back(30);
    lst.push_back(40);
    lst.push_back(50);
    lst.push_back(60);

    for (std::list<int>::iterator i = lst.begin(); i != lst.end(); i++)
        std::cout << *i << std::endl;

    return (0);
}
