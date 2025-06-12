/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 17:01:50 by gude-cas          #+#    #+#             */
/*   Updated: 2025/04/17 13:34:47 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#define RED     "\033[1;31m"
#define GREEN   "\033[1;32m"
#define R       "\033[0m"

#include <ctime>
#include <vector>
#include <climits>
#include <cstdlib>
#include <iostream>
#include <algorithm>

class Span : public std::vector<int>
{
    private:
        unsigned N;
    
    public:
        Span();
        Span(unsigned int N);
        Span(Span const &obj);
        virtual ~Span();
        
        void         addNumber(int nb);
        unsigned int shortestSpan();
        unsigned int longestSpan();
        
        Span &operator=(Span const &obj);
        
        template <typename Iterator>
        void    addRange(Iterator begin, Iterator end);
};

template <typename Iterator>
void Span::addRange(Iterator begin, Iterator end)
{
    if(distance(begin, end) + this->size() > this->N)
        throw (std::out_of_range(RED "Too much elements in container..." R));
    this->insert(this->end(), begin, end);
}

#endif
