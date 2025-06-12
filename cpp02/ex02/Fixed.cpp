/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 16:26:27 by gude-cas          #+#    #+#             */
/*   Updated: 2024/04/10 10:52:48 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : value(0){}

Fixed::Fixed(const Fixed &obj)
{
	*this = obj;
}

Fixed::Fixed(const int value)
{
	this->value = value << this->bits;
}

Fixed::Fixed(const float value)
{
	this->value = roundf(value * (1 << this->bits));
}

Fixed &Fixed::operator=(const Fixed &obj)
{
	this->value = obj.getRawBits();
	return *this;
}

Fixed::~Fixed(){}

float Fixed::toFloat(void) const
{
	return ((float)this->value / (float)(1 << this->bits));
}

int Fixed::toInt(void) const
{
	return this->value >> this->bits;
}

int Fixed::getRawBits(void) const
{
	return this->value;
}

void Fixed::setRawBits(int const raw)
{
	this->value = raw;
}

bool Fixed::operator>(const Fixed &obj) const
{
	return this->toFloat() > obj.toFloat();
}

bool Fixed::operator<(const Fixed &obj) const
{
	return this->toFloat() < obj.toFloat();
}

bool Fixed::operator>=(const Fixed &obj) const
{
	return this->toFloat() >= obj.toFloat();
}

bool Fixed::operator<=(const Fixed &obj) const
{
	return this->toFloat() <= obj.toFloat();
}

bool Fixed::operator==(const Fixed &obj) const
{
	return this->toFloat() == obj.toFloat();
}

bool Fixed::operator!=(const Fixed &obj) const
{
	return this->toFloat() != obj.toFloat();
}

Fixed Fixed::operator+(const Fixed &obj) const
{
	return Fixed(this->toFloat() + obj.toFloat());
}

Fixed Fixed::operator-(const Fixed &obj) const
{
	return Fixed(this->toFloat() - obj.toFloat());
}

Fixed Fixed::operator*(const Fixed &obj) const
{
	return Fixed(this->toFloat() * obj.toFloat());
}

Fixed Fixed::operator/(const Fixed &obj) const
{
	return Fixed(this->toFloat() / obj.toFloat());
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	--value;
	return tmp;
}

Fixed Fixed::operator--()
{
	this->value--;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	++value;
	return tmp;
}

Fixed Fixed::operator++()
{
	this->value++;
	return *this;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	return a < b ? a : b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	return a > b ? a : b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	return a < b ? a : b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	return a > b ? a : b;
}

std::ostream &operator<<(std::ostream &out, Fixed const &obj)
{
	out << obj.toFloat();
	return out;
}