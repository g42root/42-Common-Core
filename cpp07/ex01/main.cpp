/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 15:29:14 by gude-cas          #+#    #+#             */
/*   Updated: 2025/04/15 19:41:23 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{
	int			intArr[] = {1, 3, 3, 7};
	std::string strArr[] = {"I", "am", "Malenia", ",", "blade", "of", "Miquela."};

	iter(intArr, 4, print);
	std::cout << std::endl;
	iter(strArr, 7, print);
	std::cout << std::endl;
	
	return (0);
}
