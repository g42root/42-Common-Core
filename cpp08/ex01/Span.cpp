/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 17:02:07 by gude-cas          #+#    #+#             */
/*   Updated: 2025/04/17 13:36:38 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : N(0)
{
}

Span::Span(unsigned int N) : N(N)
{
}

Span::Span(Span const &obj) : std::vector<int>(obj), N(obj.N)
{
}

Span::~Span()
{
}

void Span::addNumber(int nb)
{
    if (this->size() >= N)
        throw (std::out_of_range(RED "Too much elements in container" R));
    this->push_back(nb);
}

unsigned int Span::shortestSpan()
{
    unsigned int minSpan = UINT_MAX;
    
    if (this->size() < 2)
        throw (std::out_of_range(RED "No span could be found, not enough numbers" R));
    std::sort(this->begin(), this->end());
    for (unsigned int i = 1; i < this->size(); i++)
        minSpan = std::min(minSpan, static_cast<unsigned int>((*this)[i] - (*this)[i - 1]));
    return (minSpan);
}

unsigned int Span::longestSpan()
{
    if (this->size() < 2)
        throw (std::out_of_range(RED "No span could be found, not enough numbers" R));
    return (*std::max_element(this->begin(), this->end()) - *std::min_element(this->begin(), this->end()));
}

Span &Span::operator=(Span const &obj)
{
    this->Span::vector::operator=(obj);
    this->N = obj.N;
    return (*this);
}
