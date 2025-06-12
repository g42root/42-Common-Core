/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 15:29:14 by gude-cas          #+#    #+#             */
/*   Updated: 2025/04/15 19:36:59 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void iter(T *arr, int len, void f(T &))
{
	for (int i = 0; i < len; i++)
		f(arr[i]);
}

template <typename T>
void print(T &arg)
{
	std::cout << arg << std::endl;
}

#endif
