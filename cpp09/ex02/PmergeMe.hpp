/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 11:14:17 by gude-cas          #+#    #+#             */
/*   Updated: 2025/05/10 11:55:52 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <list>
#include <ctime>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <iomanip>
#include <iostream>

class PmergeMe
{
    public:
        PmergeMe();
        PmergeMe(PmergeMe const &obj);
        PmergeMe &operator=(PmergeMe const &obj);
        ~PmergeMe();
        
        void sort();
        void fillContainers(char **av);
        void displayInfo(std::string const &name, double timeus);
        void displayBefore();
        void displayAfter();
        
    private:
        std::list<int> list;
        std::vector<int> vector;
        
        // LIST
        void mergeSortList(std::list<int>::iterator begin, std::list<int>::iterator end);
        void mergeList(std::list<int>::iterator begin, std::list<int>::iterator mid, std::list<int>::iterator end);
        static std::list<int>::iterator insertionList(std::list<int>::iterator begin, std::list<int>::iterator end, int value);
        void insertionSortList();
        
        // VECTOR
        void mergeSortVector(int begin, int end);
        void mergeVector(int begin, int mid, int end);
        int insertionVector(int begin, int end, int value, std::vector<int> &tmp);
        void insertionSortVector();
};