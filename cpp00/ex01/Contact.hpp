/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 20:05:01 by gude-cas          #+#    #+#             */
/*   Updated: 2024/04/04 18:55:19 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define PURPLE "\033[35m"
#define BLUE "\033[36m"
#define R "\033[0m"

class Contact
{
	private :
		std::string	FirstName;
		std::string	LastName;
		std::string NickName;
		std::string PhoneNumber;
		std::string DarkestSecret;

	public :
		void	addValues(std::string, std::string, std::string, std::string, std::string);
		void	printLine(void);
		void	display(void);
};