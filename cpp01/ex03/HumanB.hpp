/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 17:44:26 by gude-cas          #+#    #+#             */
/*   Updated: 2024/04/06 16:42:25 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
    private:
        Weapon *weapon;
        std::string name;
        
    public:
        HumanB(const std::string &name);
        ~HumanB();
        
        void attack();
        void setWeapon(Weapon &weapon);
};

#endif