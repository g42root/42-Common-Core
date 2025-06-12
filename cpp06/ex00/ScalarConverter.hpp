/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 16:08:26 by gude-cas          #+#    #+#             */
/*   Updated: 2025/04/14 11:00:40 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <cmath>
#include <cfloat>
#include <cerrno>
#include <climits>
#include <iostream>

class ScalarConverter
{
    private:
        ScalarConverter();
        ScalarConverter(ScalarConverter const &obj);

        ScalarConverter &operator=(ScalarConverter const &obj);

    public:
        ~ScalarConverter();

        static void convert(std::string const &value);
};

#endif