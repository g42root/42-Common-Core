/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 14:54:09 by gude-cas          #+#    #+#             */
/*   Updated: 2025/04/19 11:57:52 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template <typename T>
void testEasyFind(T &container, int value)
{
    try
    {
        std::cout << "Found value: " << *easyfind(container, value) << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
}

int main(void)
{
    std::vector<int> vct;
    for (int i = 0; i < 10; i++)
        vct.push_back(i);

    std::cout << GREEN "(1) Vector" R << std::endl;
    testEasyFind(vct, 5);
    testEasyFind(vct, 42);   // should throw

    std::list<int> lst;
    for (int i = 10; i < 20; i++)
        lst.push_back(i);

    std::cout << std::endl;
    std::cout << GREEN "(2) List" R << std::endl;
    testEasyFind(lst, 15);
    testEasyFind(lst, 2);    // should throw

    std::deque<int> deq;
    for (int i = 100; i <= 110; i++)
        deq.push_back(i);
    
    std::cout << std::endl;
    std::cout << GREEN "(3) Deque" R << std::endl;
    testEasyFind(deq, 100);
    testEasyFind(deq, 999);  // should throw

    std::cout << std::endl;    
    std::vector<int> empty;
    std::cout << GREEN "(4) Empty Container" R << std::endl;
    testEasyFind(empty, 0);  // should throw

    return (0);
}
