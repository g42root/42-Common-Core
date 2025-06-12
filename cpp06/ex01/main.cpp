/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 13:15:07 by gude-cas          #+#    #+#             */
/*   Updated: 2025/04/14 11:00:44 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void)
{
    Data input;
    
    input.name = "Charles"; // string
    input.age = 65;         // int
    input.height = 1.75;    // float
    
    Data *data(&input);
    std::cout << "BEFORE SERIALIZER" << std::endl;
    std::cout << "Name: " << data->name << std::endl;
    std::cout << "Age: " << data->age << std::endl;
    std::cout << "Height: " << data->height << std::endl;
    std::cout << std::endl;
    
    uintptr_t raw(Serializer::serialize(&input));
    Data     *deserialized(Serializer::deserialize(raw));
    
    std::cout << "UNSIGNED INT" << std::endl;
    std::cout << raw << std::endl << std::endl;

    std::cout << "AFTER DESERIALIZER" << std::endl;
    std::cout << "Name: " << deserialized->name << std::endl;
    std::cout << "Age: " << deserialized->age << std::endl;
    std::cout << "Height: " << deserialized->height << std::endl;
}
