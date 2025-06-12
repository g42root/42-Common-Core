/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 16:26:29 by gude-cas          #+#    #+#             */
/*   Updated: 2024/04/10 10:52:32 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <cmath>

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

		int getRawBits(void) const;
		void setRawBits(const int raw);
		float toFloat(void) const;
		int toInt(void) const;

		bool operator>(const Fixed &obj) const;
		bool operator<(const Fixed &obj) const;
		bool operator>=(const Fixed &obj) const;
		bool operator<=(const Fixed &obj) const;
		bool operator==(const Fixed &obj) const;
		bool operator!=(const Fixed &obj) const;

		Fixed operator+(const Fixed &obj) const;
		Fixed operator-(const Fixed &obj) const;
		Fixed operator*(const Fixed &obj) const;
		Fixed operator/(const Fixed &obj) const;
		
		Fixed operator--();
		Fixed operator++();
		Fixed operator++(int);
		Fixed operator--(int);

		static Fixed &min(Fixed &a, Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
		static const Fixed &min(const Fixed &a, const Fixed &b);
		static const Fixed &max(const Fixed &a, const Fixed &b);
} ;

std::ostream &operator<<(std::ostream &out, Fixed const &obj);