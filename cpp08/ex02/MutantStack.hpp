/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 11:44:38 by gude-cas          #+#    #+#             */
/*   Updated: 2025/04/19 13:34:58 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#define RED     "\033[1;31m"
#define GREEN   "\033[1;32m"
#define R       "\033[0m"

#include <list>
#include <stack>
#include <deque>
#include <iostream>

template <class T, class Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
    public:
        typedef typename Container::iterator iterator;
        
        iterator begin();
        iterator end();
};

template <class T, class Container>
typename MutantStack<T, Container>::iterator MutantStack<T, Container>::begin()
{
    return (this->c.begin());
}

template <class T, class Container>
typename MutantStack<T, Container>::iterator MutantStack<T, Container>::end()
{
    return (this->c.end());
}

#endif
