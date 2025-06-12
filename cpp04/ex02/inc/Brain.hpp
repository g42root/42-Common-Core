/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 13:43:16 by gude-cas          #+#    #+#             */
/*   Updated: 2024/04/15 13:14:28 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include "Colors.hpp"

class Brain
{
	private:
		std::string ideas[100];

	public:
		Brain();
		Brain(const Brain &obj);
		Brain &operator=(const Brain &obj);
		virtual ~Brain();

		std::string getIdea(int i) const;
		void setIdea(int i, std::string idea);
};

#endif