/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 20:14:26 by gude-cas          #+#    #+#             */
/*   Updated: 2024/04/04 18:22:42 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
    std::string	input;
	PhoneBook phoneBook;

	phoneBook.createPhoneBook();
	std::cout << GREEN "☎️ << Welcome to My Awesome PhoneBook >> ☎️" R << std::endl;
	while (42)
	{
		std::cout << BLUE "Choose a command: " YELLOW "ADD / SEARCH / EXIT" R << std::endl;
		getline(std::cin, input);
		if (input.compare("ADD") == 0)
			phoneBook.add();
		else if (input.compare("SEARCH") == 0)
			phoneBook.search();
		else if (input.compare("EXIT") == 0)
			break;
	}
	std::cout << GREEN "🫶  Thank you for using My Awesome PhoneBook! 🫶" R << std::endl;
    
	return 0;
}