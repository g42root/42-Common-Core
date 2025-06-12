/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 21:37:31 by gude-cas          #+#    #+#             */
/*   Updated: 2024/04/04 17:44:42 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	PhoneBook::createPhoneBook(void)
{
	this->index = 0;
	for (int i = 0; i < 8; i++)
		this->status[i] = false;
}

void	PhoneBook::add(void)
{
	std::string	tmp[5];

	this->index = this->index % 8;
	this->status[this->index] = true;
	for (int i = 0; i < 5; i++)
	{
		if (i == 0)
			std::cout << BLUE "🥇 First Name: " R;
		if (i == 1)
			std::cout << BLUE "✨ Last Name: " R;
		if (i == 2)
			std::cout << BLUE "👀 Nick Name: " R;
		if (i == 3)
			std::cout << BLUE "📞 Phone Number: " R;
		if (i == 4)
			std::cout << BLUE "🌑 Darkest Secret: " R;
		getline(std::cin, tmp[i]);
		if (tmp[i].empty())
		{
            std::cout << std::endl;
			std::cout << RED "💀 Field cannot be empty 💀" R << std::endl;
            std::cout << std::endl;
			i--;
		}
	}
	this->contactList[this->index].addValues(tmp[0], tmp[1], tmp[2], tmp[3], tmp[4]);
	this->index++;
}

void	PhoneBook::search(void)
{
	std::string	input;
	char		contact;

	std::cout << BLUE "|  Index   |   Name   | LastName | Nickname |" R << std::endl;
	for (int i = 0; i < 8; i++)
	{
		if (this->status[i] == false)
			break;
		else
		{
			std::cout << BLUE "|" R << i+1 << BLUE "         |" R;
			this->contactList[i].printLine();
		}
	}
	while (42)
	{
		std::cout << BLUE "Index?" R << std::endl;
		getline(std::cin, input);
		if (input.empty() == 0)
			break;
	}
	contact = input[0];

	if (input.size() != 1 || (contact < '0' || contact > '8') || status[contact - 1 - '0'] == false)
    {
        std::cout << std::endl;
		std::cout << RED "💀 Invalid index 💀" R << std::endl;
        std::cout << std::endl;
    }
	else
		this->contactList[contact - '0' - 1].display();
}