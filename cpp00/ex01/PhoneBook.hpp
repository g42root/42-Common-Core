/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 20:03:41 by gude-cas          #+#    #+#             */
/*   Updated: 2024/04/04 18:56:02 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define PURPLE "\033[35m"
#define BLUE "\033[36m"
#define R "\033[0m"

class PhoneBook 
{
	private:
		Contact contactList[8];
		int		index;
		bool	status[8];

	public:
		void	createPhoneBook(void);
		void	add(void);
		void	search(void);
};