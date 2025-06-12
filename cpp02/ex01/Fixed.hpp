/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:11:40 by gude-cas          #+#    #+#             */
/*   Updated: 2024/04/10 10:53:24 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int value;
        static const int bits = 8;

    public:
        Fixed();
        Fixed(const int value);
        Fixed(const float value);
        Fixed(const Fixed &obj);
        Fixed &operator=(const Fixed &obj);
        ~Fixed();
        
        int getRawBits() const;
        void setRawBits(const int raw);
        float toFloat() const;
        int toInt() const;
};

std::ostream &operator<<(std::ostream &out, Fixed const &obj);