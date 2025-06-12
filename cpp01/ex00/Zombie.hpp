/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 18:50:15 by gude-cas          #+#    #+#             */
/*   Updated: 2024/04/07 15:18:02 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie 
{
    private:
	    std::string name;
	
    public:
	    Zombie(std::string name);
	    ~Zombie();
        
	    void announce();
};