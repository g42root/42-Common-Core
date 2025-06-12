/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 13:15:41 by gude-cas          #+#    #+#             */
/*   Updated: 2025/04/15 11:44:50 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include <stdint.h>

typedef struct TData
{
    std::string name;
    int         age;
    float       height;             
}               Data;

class Serializer
{
    private:
        Serializer();
        Serializer(Serializer const &obj);
        ~Serializer();
        
        Serializer &operator=(Serializer const &obj);
    
    public:     
        static uintptr_t serialize(Data *ptr);
        static Data*     deserialize(uintptr_t raw);
};

#endif
