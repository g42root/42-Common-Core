/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 15:29:14 by gude-cas          #+#    #+#             */
/*   Updated: 2025/04/15 11:54:08 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main(void)
{
    srand(time(NULL));
    
    Base *rand1(generate());
    Base *rand2(generate());
    Base *rand3(generate());
    
    identify(rand1);
    identify(rand2);
    identify(rand3);
    
    std::cout << std::endl;
    
    identify(*rand1);
    identify(*rand2);
    identify(*rand3);
    
    std::cout << std::endl;
    
    delete rand1;
    delete rand2;
    delete rand3;
}
