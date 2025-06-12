/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 11:14:03 by gude-cas          #+#    #+#             */
/*   Updated: 2025/05/19 14:38:50 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

///////////////////// ORTHODOX CANONICAL FORM //////////////////////////////////
PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(PmergeMe const &obj) 
{ 
    this->list = obj.list;
    this->vector = obj.vector; 
}

PmergeMe &PmergeMe::operator=(PmergeMe const &obj)
{ 
    if (this != &obj)
    {
        this->list = obj.list;
        this->vector = obj.vector;
    }
    return (*this);
}

PmergeMe::~PmergeMe() {}

////////////////////////////////////////////////////////////////////////////////



/////////////////////////// ACTION FUNCTIONS ///////////////////////////////////

void PmergeMe::sort()
{
    std::clock_t start, end;
    double listTime, vectorTime;
    
    displayBefore();
    
    start = clock();
    mergeSortList(list.begin(), list.end());
    insertionSortList();
    end = clock();
    listTime = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000000.0;
    
    start = clock();
    mergeSortVector(0, vector.size());
    insertionSortVector();
    end = clock();
    vectorTime = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000000.0;
    
    displayAfter();
    
    displayInfo("std::list", listTime);
    displayInfo("std::vector", vectorTime);
}

void PmergeMe::fillContainers(char **av)
{
    for (int i = 0; av[i]; ++i)
    {
        int nb = std::atoi(av[i]);
        if (nb < 0)
            throw (std::invalid_argument("Only positive integers are allowed."));
        list.push_back(nb);
        vector.push_back(nb);
    }
}

void PmergeMe::displayInfo(std::string const &name, double timeus)
{
    std::cout << "Time to process a range of " << vector.size() << " elements with "
              << name << " : " << timeus << " us" << std::endl;
}

void PmergeMe::displayBefore()
{
    std::cout << "Before: ";
    
    for (std::vector<int>::iterator it = vector.begin(); it != vector.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
}

void PmergeMe::displayAfter()
{
    std::cout << "After: ";
    
    for (std::vector<int>::iterator it = vector.begin(); it != vector.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
}

////////////////////////////////////////////////////////////////////////////////



////////////////////////////////// LIST SORT ///////////////////////////////////

void PmergeMe::mergeList(std::list<int>::iterator begin, std::list<int>::iterator mid, std::list<int>::iterator end)
{
    std::list<int> tmp;
    std::list<int>::iterator a = begin, b = mid;
    
    while (a != mid && b != end)
    {
        if (*a < *b)
            tmp.push_back(*a++);
        else
            tmp.push_back(*b++);
    }
    while (a != mid)
        tmp.push_back(*a++);
    while (b != end)
        tmp.push_back(*b++);
    
    std::copy(tmp.begin(), tmp.end(), begin);
}


void PmergeMe::mergeSortList(std::list<int>::iterator begin, std::list<int>::iterator end)
{
    int size = std::distance(begin, end);
    if (size <= 2)
    {
        if (size == 2)
        {
            std::list<int>::iterator tmp = begin;
            ++tmp;
            if (*begin > *tmp)
                std::iter_swap(begin, tmp);
        }
        return ;
    }
    std::list<int>::iterator mid = begin;
    std::advance(mid, size / 2);
    mergeSortList(begin, mid);
    mergeSortList(mid, end);
    mergeList(begin, mid, end);
}

std::list<int>::iterator PmergeMe::insertionList(std::list<int>::iterator begin, std::list<int>::iterator end, int value)
{
    if (begin == end)
        return (begin);
    std::list<int>::iterator mid = begin;
    std::advance(mid, std::distance(begin, end) / 2);
    if (value < *mid)
        return (insertionList(begin, mid, value));
    else if (value > *mid)
        return (insertionList(++mid, end, value));
    else
        return (mid);
}

void PmergeMe::insertionSortList()
{
    std::list<int> tmp;
    std::list<int>::iterator current = list.begin();
    for (size_t i = 0; i < list.size(); ++i)
    {
        if (current == --list.end() || i % 2)
            tmp.insert(insertionList(tmp.begin(), tmp.end(), *current), *current);
        else
            tmp.push_back(*current);
        ++current;
    }
    list = tmp;
}

////////////////////////////////////////////////////////////////////////////////



//////////////////////////////// VECTOR SORT ///////////////////////////////////

void PmergeMe::mergeSortVector(int begin, int end)
{
    int size = end - begin;
    if (size <= 2)
    {
        if (size == 2 && vector[begin] > vector[end - 1])
            std::swap(vector[begin], vector[end - 1]);
        return ;
    }
    int mid = begin + size / 2;
    mergeSortVector(begin, mid);
    mergeSortVector(mid, end);
    mergeVector(begin, mid, end);
}

void PmergeMe::mergeVector(int begin, int mid, int end)
{
    std::vector<int> tmp;
    int a = begin, b = mid;
    
    while (a < mid && b < end)
    {
        if (vector[a] < vector[b])
            tmp.push_back(vector[a++]);
        else
            tmp.push_back(vector[b++]);
    }
    while (a < mid)
        tmp.push_back(vector[a++]);
    while (b < end)
        tmp.push_back(vector[b++]);
    std::copy(tmp.begin(), tmp.end(), vector.begin() + begin);
}

int PmergeMe::insertionVector(int begin, int end, int value, std::vector<int> &tmp)
{
    if (begin == end)
        return (begin);
        
    int mid = begin + (end - begin) / 2;
    if (value < tmp[mid])
        return (insertionVector(begin, mid, value, tmp));
    else if (value > tmp[mid])
        return (insertionVector(mid + 1, end, value, tmp));
    else
        return (mid);
}

void PmergeMe::insertionSortVector()
{
    std::vector<int> tmp;
    
    for (size_t i = 0; i < vector.size(); i++)
    {
        if (i + 1 == vector.size() || i % 2)
            tmp.insert(tmp.begin() + insertionVector(0, tmp.size(), vector[i], tmp), vector[i]);
        else
            tmp.push_back(vector[i]);
    }
    vector = tmp;
}

////////////////////////////////////////////////////////////////////////////////