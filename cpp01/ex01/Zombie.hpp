/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 15:47:33 by gude-cas          #+#    #+#             */
/*   Updated: 2024/04/07 15:13:06 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie 
{
    private:
	    std::string name;
	
    public:
        Zombie();
	    ~Zombie();
        
	    void announce();
		void setName(std::string name);
};