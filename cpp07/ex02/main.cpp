/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 19:40:46 by gude-cas          #+#    #+#             */
/*   Updated: 2025/04/16 10:49:35 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
    std::cout << GREEN << "[1] Default Constructor Test" << R << std::endl;
    Array<int> emptyArr;
    std::cout << "Size of empty array: " << emptyArr.size() << std::endl;

    std::cout << std::endl << GREEN << "[2] Parameterized Constructor Test" << R << std::endl;
    Array<int> intArr(5);
    for (int i = 0; i < intArr.size(); i++)
        intArr[i] = i * 10;
    for (int i = 0; i < intArr.size(); i++)
        std::cout << "intArray[" << i << "] = " << intArr[i] << std::endl;

    std::cout << std::endl << GREEN << "[3] Copy Constructor Test" << R << std::endl;
    Array<int> copyArr(intArr);
    for (int i = 0; i < copyArr.size(); i++)
        std::cout << "copyArray[" << i << "] = " << copyArr[i] << std::endl;

    std::cout << std::endl << GREEN << "[4] Assignment Operator Test" << R << std::endl;
    Array<int> assignArr;
    assignArr = intArr;
    for (int i = 0; i < assignArr.size(); i++)
        std::cout << "assignArray[" << i << "] = " << assignArr[i] << std::endl;

    std::cout << std::endl << GREEN << "[5] Bounds Check Test" << R << std::endl;
    try {
        std::cout << intArr[100] << std::endl;
    } catch (std::exception &e) {
        std::cerr << RED << "Caught exception: " << e.what() << R << std::endl;
    }

    std::cout << std::endl << GREEN << "[6] Array with std::string Test" << R << std::endl;
    Array<std::string> strArr(3);
    strArr[0] = "Hello";
    strArr[1] = "World";
    strArr[2] = "!";
    for (int i = 0; i < strArr.size(); i++)
        std::cout << "strArray[" << i << "] = " << strArr[i] << std::endl;

    std::cout << std::endl << GREEN << "[7] Large Array with Random Data" << R << std::endl;
    std::srand(static_cast<unsigned int>(std::time(NULL)));
    Array<int> bigArr(10);
    for (int i = 0; i < bigArr.size(); i++)
        bigArr[i] = std::rand() % 100;
    for (int i = 0; i < bigArr.size(); i++)
        std::cout << "bigArray[" << i << "] = " << bigArr[i] << std::endl;

    return (0);
}
