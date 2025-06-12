/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 13:15:55 by gude-cas          #+#    #+#             */
/*   Updated: 2025/04/14 11:00:48 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{
    std::cout << "Default constructor has been called" << std::endl;
}

Serializer::Serializer(Serializer const &obj)
{
    (void)obj;
    std::cout << "Copy constructor has been called" << std::endl;
}

Serializer::~Serializer()
{
    std::cout << "Destructor has been called" << std::endl;
}

Serializer &Serializer::operator=(Serializer const &obj)
{
    (void)obj;
    return (*this);
}

uintptr_t Serializer::serialize(Data *ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data *Serializer::deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data*>(raw));
}
