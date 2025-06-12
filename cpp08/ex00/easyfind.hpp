/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 14:54:30 by gude-cas          #+#    #+#             */
/*   Updated: 2025/04/19 11:58:00 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#define RED     "\033[1;31m"
#define GREEN   "\033[1;32m"
#define R       "\033[0m"

#include <list>
#include <deque>
#include <vector>
#include <iostream>
#include <stdexcept>
#include <algorithm>

template <typename T>
typename T::iterator easyfind(T &container, int toFind)
{
    typename T::iterator find = std::find(container.begin(), container.end(), toFind);
    
    if (find == container.end())
        throw (std::runtime_error(RED "Nothing found in container..." R));
    return (find);
}

#endif
