/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 21:37:08 by gude-cas          #+#    #+#             */
/*   Updated: 2024/04/04 17:44:05 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::addValues(std::string fn, std::string ln, std::string nn, std::string pn, std::string ds)
{
	this->FirstName = fn;
	this->LastName = ln;
	this->NickName = nn;
	this->PhoneNumber = pn;
	this->DarkestSecret = ds;
}

void	Contact::printLine(void)
{
	std::string	fn = this->FirstName;
	std::string	ln = this->LastName;
	std::string	nn = this->NickName;
	
	fn.resize(10, ' ');
	if (this->FirstName.size() > 10)
		fn[9] = '.';
	ln.resize(10, ' ');
	if (this->LastName.size() > 10)
		ln[9] = '.';
	nn.resize(10, ' ');
	if (this->NickName.size() > 10)
		nn[9] = '.';
	std::cout << fn << BLUE "|" R;
	std::cout << ln << BLUE "|" R;
	std::cout << nn << BLUE "|" R << std::endl;
}

void	Contact::display(void)
{
	std::cout << BLUE "First Name : " R << this->FirstName << std::endl;
	std::cout << BLUE "Last Name : " R << this->LastName << std::endl;
	std::cout << BLUE "Nick Name : " R << this->NickName << std::endl;
	std::cout << BLUE "Phone Number : " R << this->PhoneNumber << std::endl;
	std::cout << BLUE "Darkest Secret : " R << this->DarkestSecret << std::endl;
    std::cout << std::endl;
}