/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 19:40:49 by gude-cas          #+#    #+#             */
/*   Updated: 2025/04/16 10:55:17 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#define RED     "\033[1;31m"
#define GREEN   "\033[1;32m"
#define R       "\033[0m"

#include <ctime>
#include <cstdlib>
#include <iostream>

template <typename T>
class Array
{
    private:
        T           *elements;
        unsigned int len;

    public:
        Array();
        Array(unsigned int n);
        Array(Array const &obj);
        ~Array();
        
        int size() const;
        
        Array   &operator=(Array const &obj);
        T       &operator[](unsigned int index);
};

// Default constructor
template <typename T>
Array<T>::Array() : elements(NULL), len(0)
{ 
}

// Parameterized constructor, creates and array of n elements
template <typename T>
Array<T>::Array(unsigned int n) : elements(new T[n]), len(n)
{
}

// Copy constructor
template <typename T>
Array<T>::Array(Array const &obj) : elements(new T[obj.len]), len(obj.len)
{
    for (unsigned int i = 0; i < len; i++)
        this->elements[i] = obj.elements[i];
}

// Destructor
template <typename T>
Array<T>::~Array()
{
    delete [] this->elements;
}

// Returns number of elements in the array
template <typename T>
int Array<T>::size() const
{
    return (this->len);
}

// Assignment operator
template <typename T>
Array<T> &Array<T>::operator=(Array const &obj)
{
    delete [] this->elements;
    this->elements = new T[obj.len];
    this->len = obj.len;
    for (unsigned int i = 0; i < this->len; i++)
        this->elements[i] = obj.elements[i];
    return (*this);
}

template <typename T>
T &Array<T>::operator[](unsigned int index)
{
    if (index >= this->len)
        throw (std::out_of_range("Index is out of bounds..."));
    return (this->elements[index]);
}

#endif
